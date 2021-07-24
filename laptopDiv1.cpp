#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>a>>b;
		if(a != b)
		{
			cout<<"Happy Alex";
			return 0;
		}
	}
	cout<<"Poor Alex";
}