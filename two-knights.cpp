#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t; cin>>t;
	//taking i X i cheesboard
	for(ll i=1; i<=t; i++){
		ll a = i*i*(i*i-1)/2;
		ll b = 2*(i-2)*(2*(i-4)+6);
		cout<<a-b<<endl;
	}
	return 0;
}