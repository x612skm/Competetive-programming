#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n,m,curr,ticket;
	cin>>n>>m;

	multiset<ll, greater<int>> tickets;
	while(n--)
	{
		cin>>ticket;
		tickets.insert(ticket);
	}
	while(m--)
	{
		cin>>curr;
		auto it= tickets.lower_bound(curr);

		if(it == tickets.end())
			cout<<-1<<endl;
		else
		{
			cout<<*it<<endl;
			tickets.erase(it);
		}
	}
	return 0;
}