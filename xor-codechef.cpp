/*#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define mod 100000000007;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll x;
		ll y=n-1;
		ll temp =1;;

		while(y>0)
		{
			if(y%2==1)
				temp = x*temp%mod;
			x=x*x%mod;
			y=y/2;
		}
		cout<<temp<<endl;
	}
}

*/
/*
#include <iostream>
using namespace std;
typedef unsigned long long ll;
#define endl "\n"
int main() {
	// your code goes here
	ll t; cin>>t;
	while(t-- > 0)
	{
	    ll n,m; cin>>n>>m; ll c=0;
	    vector <ll> ME(n+1,1);
	    for(ll i=2; i<=n; i++){ lla=m%i; c+=ME[a]; for(ll j=a;j<n;j+=i) ME[j]++; }
	
	    cout<<c<<endl;
	}
	return 0;
}
