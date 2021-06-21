#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int k;
	cin>>n>>k;
	int sum=0;

	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		sum += x;
	}

	int between = (n-1)*10;

	if(sum+between > k){
		cout<<"-1"<<endl;
	}
	else
	{
		int total = (k-sum)/5;
		cout<<total<<endl;
	}
	return 0;
}