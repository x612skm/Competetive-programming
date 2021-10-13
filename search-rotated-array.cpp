#include<bits/stdc++.h>
using namespace std;

///function for the rotated sorted array 
class solution{
public:
	int search(vector<int>& a, int target){
		int low = 0, high = a.size() -1;

		while(low <= high){
			int mid  = (low + high) >> 1;

			if(a[mid] == target) return mid;

			//left side is sorted
			if(a[low] <= a[mid]){
				if(target >= a[low] && target <= a[mid]){
					//means it is in the left side 
					high = mid -1;
				}
				else{
					low = mid+1;
				}
			}
			else{
				if(target >= a[mid] && target <= a[high]){
					//means if it on the right side 
					low = mid +1;

				}
				else{
					high = mid -1;
				}
			}
		}
		return -1;
	}
};