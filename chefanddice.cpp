#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){
	int t; cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=0;
		sum = (n/4)*44;
		int rem=(n%4);

		if(n>=4){
			if(rem == 0){
				sum=sum+16;
			}
			if(rem == 1){
				sum+=32;

			}
			if(rem == 2){
				sum+=44;
			}
			if(rem == 3){
				sum+=55;
			}
			cout<<sum<<endl;

		}
		else{
			int res;
			if(rem == 1){
				res = 20;

			}
			if(rem == 2){
				res=36;
			}
			if(rem == 3){
				res=51;
			}
			cout<<res<<endl;

		}

	}
	return 0;
}