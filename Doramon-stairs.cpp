#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,x;
	while(cin>>n>>m)
	{
		if(n<m)
		{
			x=-1;

		}
		else
		{
			if(n%2==0){
				x=n/2;
			}
			else{
				x=(n/2)+1;
			}
			while(x%m != 0)
			{
				x++;
			}
		}
		cout<<x;
	}
	return 0;
}

//same time as previous // via codeforces
/*
for(i=(n+1)/2; i<=n ; i++)
{
	if(i%m==0){
	cout<<i<<endl;
	return 0;
	}
}
cout<<-1<<endl;
return 0;

*/