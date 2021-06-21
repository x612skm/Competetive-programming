
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	set<int> levels;
	int m;
	cin>>m;
	for(int i=0; i<m; i++)
	{
		int x;
		cin>>x;
		levels.insert(x);
	}
	int k;
	cin>>k;
	for(int i=0; i<k; i++)
	{
		int w;
		cin>>w;
		levels.insert(w);
	}
	if(levels.size() == n)
	{
		cout<<"I become the guy.";
	}
	else
	{
		cout<<"Oh, my keyboard!";
	}

	return 0;
}