//code not worked
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		sort(n);
		if(n%2==0){
			cout<<0<<endl;
			else{
				for (ll i = 0; i < pow(2, n); i++) 
					{ 
					ll sum1 = 0, sum2 = 0;
					 for (ll j = 0; j < n ; j++) 
					 	{ if (i & 1 << j) 
					 		sum1 += a[j]; 
					 	else 
					 		sum2 += a[j]; 
					 	} 
					 	min1 = min(min1, abs(sum1 - sum2)); 
					}
			}
		}
	}

}