#include<bits/stdc++.h>
using namespace std;
//count rotations in the array
vector<int> CountRotation(vector<int> arr){
	int pivot = findPivot(arr);
	return pivot+1;
}

//search in rotated sorted arr if pivot is present and no dup
vector<int> findPivot(vector<int> arr){
	int start = 0;
	int end= arr.size()-1;

	while(start <= end){
		int mid = start + (end - start)/2;

		//4 cases for finding the pivot element
		if(mid < end && arr[mid] > arr[mid+1]){
			return mid;
		}
		if(mid > start && arr[mid] < arr[mid-1]){
			return mid-1;
		}
		if(arr[mid] <= arr[start]){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;
}

//using this when the ARRAy contains duplicate elements

vector<int> findPivotDuplicates(vector<int> arr){
	int start = 0;
	int end = arr.size() -1;

	while(start <= end){
		int mid = start + (end - start)/2;

		if(mid < end && arr[mid] > arr[mid+1]){
			return mid;
		}
		if(mid > start && arr[mid] < arr[mid-1]){
			return mid-1;
		}
		// if elements at middle, start, end are equal then just skip the duplicates
		if(arr[mid] == arr[start] && arr[mid] == arr[end]){
			//skip duplicates
			//what if start and end is pivot
			if(arr[start] > arr[start + 1]){
				return start;
			}
			start++;

			//check whether end is pivot
			if(arr[end] < arr[end-1]){
				return end;
			}
			end--;
		}
		//left side is sorted so the pivot should be in right
		else if(arr[start] < arr[mid] || (arr[start] == arr[mid] && arr[mid] > arr[end])){
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
	}
	return -1;
}