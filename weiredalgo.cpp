
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long t; cin>>t;
	while(true){
		cout<<t<<" ";
		if(t == 1)
			break;
		else if(t%2 != 0)
			t=t*3+1;
		else
			t=t/2;
}
	
}