#include<bits/stdc++.h>

using namespace std;

int main()
{
 	int n,k,ans;
 	cin>>n>>k;
 	int a[n];
 	int cnt = 0;
 	for(int i=0;i<n; i++){
 		cin>>a[i];
 		}
 		for(int i=0; i<n ;i++){
 			if(5-a[i]>=k)
 				cnt++;
 		}
 		
 		
 
 	cout<<cnt/3;
 	return 0;
}