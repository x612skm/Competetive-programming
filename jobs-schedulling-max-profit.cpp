#include<bits/stdc++.h>
using namespace std;

//lets introduce a comprator for the profits accordng to the structure of job id given
bool comparision(job a, job b)
{
	return (a.profit > b.profit);
}

pair<int, int> jobSchedulling(job arr[], int n)
{
	// given the stricture for the arr of jobs
	//sort the arr in as per the profit
	sort(arr, arr+n, comparision);

	//assign the maxi as the dead or the min element possible 
	int maxi = arr[0].dead; //at the initial position

	//assign all the elements of the arr to the empty or min possible
	for(int i=0; i<maxi; i++)
	{
		maxi = max(maxi, arr[i].dead);
	}

	int slot[maxi + 1];
	 //after creating the array initilise to the empty set -1
	for(int i=0; i<=maxi; i++){
		slot[i] = -1; //states all wmpty
	}

	int countjobs = 0; int jobprofit = 0;

	//taking loop for the elements
	for(int i=0; i<n/*n being the job id*/; i++){
	for(int j=arr[i].dead; j>0; j--){
		if(slot[j] == -1)
		{
			//jab slot empty hoga
			slot[j] = i;
			countjobs++;
			jobprofit+=arr[i].profit;
			break;
		}
	}
}
return make_pair(countjobs, jobprofit);
}

//we will create here a main function
int main(){
	//here we will initilise the job id and schedulling and tje profit in the max 
	//cout the following profit
	//return 0;
}