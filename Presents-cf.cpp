#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,b,mas[105];
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>b;
		mas[b]=i;
	}
	for(int i=1; i<=n; i++){
		cout<<mas[i]<<" ";
	}
}