/*#include<bits/stdc++.h>

using namespace std;

int main()
{
	int s, n;
	cin>>s>>n;

	while(n--)
	{
		int i, j;
		cin>>i>>j;

		if(s>i)
		{
			s +=j;
			s++;
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
}
*/
/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long s,n,array,num,i,j,x,c;
	pair<int, int>a[1000];

	while(cin>>s>>n)
	{
		c=1;
		for(i=0;i<n;i++)
		{
			cin>>a[i].first>>a[i].second;
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(s<=a[i].first){
				c=0;
				break;
			}
			else{
				s=s+a[i].second;
			}
		}
		if(c==0)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}
	}
	return 0;
}
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long s,n,array,i,j,c;
	pair<int, int>a[10000];

	while(cin>>s>>n)
	{
		c=1;
		for(i=0; i<n; i++)
		{
			cin>>a[i].first>>a[i].second;

		}
		sort(a, a+n);
		for(i=0; i<n; i++){
		if(s<=a[i].first)
		{
			c=0;
			break;
		}
		else
		{
			s=s+a[i].second;
		}
		}
		if(c==0)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}
	}
	return 0;
}