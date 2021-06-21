#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
	ll n; cin>>n;
	ll zero=0;
	// as it is the case for zero so there should be multiple of five
	for(ll i=5; i<=n; i*=5){
		zero+=n/i;
	}
	cout<<zero;	
}