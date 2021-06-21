#include<bits/stdc++.h>
#define int long long
#define mod 1000000007

using namespace std;

int answer;
vector<vector<int>> v;
vector<int> desi, desi1;

void depth(int current, int pair)
{
	desi[current] =1, desi1[current] = 1;
	int sum=0, count = 0;
	for(int i=0; i<v[current].size(); i++)
	{
		int node=v[current][i];
		if(node!=pair)
		{
			depth(node,current);
			desi[current]+=(2*desi[node]%mod);
			desi[current]%=mod;
			count++;
			desi1[current]+=desi1[node];
			desi1[current]%=mod;
			desi1[current]+=desi[node];
			desi1[current]%=mod;
			sum+=desi[node];
		}
	}
	for(int i=0;i<v[current].size(); i++)
	{
		int node=v[current][i];
		if(node!=pair)
		{
			desi1[current]+=(desi[node]*((sum-desi[node])+mod)%mod)%mod;
			desi1[current]%=mod;
		}
	}
}

signed main()
{
	int t; cin>>t;
	while(t-- > 0)
	{
		answer=0;
		int n; cin>>n;
		desi.clear();
		v.clear();
		desi1.clear();
		v.resize(n+1);
		desi.resize(n+1);
		desi1.resize(n+1);
		for(int i=1; i<n; i++)
		{
			int l,r; cin>>l>>r;
			v[l].push_back(r);
			v[r].push_back(l);
		}
		depth(1,1);
		int answer=desi1[1]%mod;
		cout<<answer<<endl;
	}
}