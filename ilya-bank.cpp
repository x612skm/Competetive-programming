#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;

	cin>>n; // theis the amount 
	// positive to no delet
	// negative condition

	if(n>=0)
	{
		cout<<n<<endl;
	}
	if(n<0)
	{
		int a = n/10;
		int b = n/100 * 10 + n%10;
		cout<<max(a,b)<<endl;
	}
	return 0;
}