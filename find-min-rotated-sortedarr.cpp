//find-min-rotated-sortedarr.cpp
public:
	class solution{
		int findMin(vector<int>& nums)
		{
			int start = 0;
			int end = nums.size()-1;

			while(start < end)
			{
				int mid = start + (end - start)/2;

				if(nums[mid] > nums[end]){
					start = mid+1;
				}
				else if(nums[mid] < nums[start]){
					end = mid;
				}
				else{
					end--;
				}
			}
			return nums[start];
		}

	};