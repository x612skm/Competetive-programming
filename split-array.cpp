//split-array.cpp
//leetcode hard problem

/*Input: nums = [7,2,5,10,8], m = 2
Output: 18
Explanation:
There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8],
where the largest sum among the two subarrays is only 18.

Example 2:

Input: nums = [1,2,3,4,5], m = 2
Output: 9

Example 3:

Input: nums = [1,4,4], m = 3
Output: 4
*/

class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int start = 0;
        int end = 0;

        for(int i=0; i<nums.size()-1; i++){
        	start = max(start, nums[i]);
        	end += nums[i];
        }

        //binary search
        while(start < end){
        	int mid = start + (end - start)/2;

        	int sum =0;
        	int pieces = 1;

        	for(auto int num : nums){
        		if(sum + num > mid){
        			/*// you cannot add this in this subarray, make new one
                    // say you add this num in new subarray, then sum = num*/
                   sum = num;
                   pieces++; 
        		}else{
        			sum += num;
        		}
        	}

        	if(pieces > m){
        		start = mid+1;
        	}
        	else{
        		end = mid;
        	}
        }
        return end; // start = end;
    }
};