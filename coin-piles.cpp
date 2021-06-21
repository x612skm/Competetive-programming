#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
	ll t,a,b;
	cin>>t;

	while(t--)
	{
		
		cin>>a>>b;
		cout<< (!((a+b)%3) && min(a,b) * 2>= max(a,b)? "YES\n" : "NO\n");
	}
}