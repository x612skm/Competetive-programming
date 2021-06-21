#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


int main()
{
	ll n; cin>>n;
	while(true)
	{
		n=n^(n>>1);	
		cout<<n<<endl;
	}
	return 0;
}