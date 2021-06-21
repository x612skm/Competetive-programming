#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m,p;

	cin>>n>>m;

	int minimum=10000000;

	int arr[m];

	for(int i=0; i<m; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+m);
	for(int i=n; i<=m ; i++)//5 7 10 10 12 22
	{
		minimum = min(minimum, abs(arr[i-1]-arr[i-n]));
	}
	cout<<minimum;
	return 0;
}