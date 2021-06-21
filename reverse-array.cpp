#include<bits/stdc++.h>
using namespace std;

void revArray(int arr[], int start, int end)
{
	//swap the array
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	start++;
	end--;
}

void printArrya(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i];
	}
}
//driver code
int main()
{
	int arr[100], count;
	cin>>count;
	for(int i=0; i<count; i++)
	{	cout<<"enter the array";
		cin>>arr[i];
	}
	printArrya(arr , n);
	revArray(arr, 0, n-1);
	cout<<printArrya(arr, n);
	

	return 0;
}