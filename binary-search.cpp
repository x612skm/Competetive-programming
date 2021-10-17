#include<bits/stdc++.h>
#include<iostream.h>
#include<math.h>
#include<string.h>

using namespace std;

int binarySearch(vector<int>& arr, int target){
	int start = 0;
	int end = arr.size()-1;

	while(start <= end){
		int mid = start + (end - start)/2;

		if(target < arr[mid]){
			end = mid -1;
		}
		else if(target > arr[mid]){
			start = mid+1;
		}
		else
		{
			//for the ans
			return mid;
		}
	}
	return mid;
}
//user code