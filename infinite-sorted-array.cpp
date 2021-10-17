infinite-sorted-array.cpp
#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>& arr, int target, int start, int end){
	while(start <= end){
		int mid = start + (end - start)/2;

		if(target <arr[mid]){
			end = mid-1;
		}
		else if(target > arr[mid]){
			start = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int ans(vector<int>& arr, int target){
	int start = 0;
	int end = 1;

	while(target > arr[end]){
		int temp = end+1;
		end = end + (end - start+1) *2;
		start = temp;
	}
	return binarySearch(arr, target, start, end);
}