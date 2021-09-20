#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
	//sorting all the goods as per the arrival and departure time
	sort(arr, arr+n);
	sort(dep, dep+n);

	int plat_needed =1; int result =1;
	int i=0, j=0;

	while(i<n && j<n){
		//considering when the both arrival and dep arr are less than the required timings of arrival and departiure 
		if(arr[i] <= dep[j]){
			plat_needed++;
			i++;

		}

		else if( arr[i] > dep[j])
		{
			plat_needed--;
			j++;
		}
		//storing the logic in the ans and then to return the aseer

		if(plat_needed >  result)
		{
			result += plat_needed;

		}

	}
	return result;
}

// after the logic function there comes the main function 
int main()
{
	// we take the input for the arrival and departure tof the trains and then
	// run the funciton inside the code then we return the cout 
	// and here we done 
	
}