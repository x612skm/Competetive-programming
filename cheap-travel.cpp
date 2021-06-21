#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,a,b;
	//no of rides, no of rides coverd by m tickets, price of one ticket, price of m ride of ticket

	cin>>n>>m>>a>>b;

	if(m*a<=b)
	{
		cout<<n*a<<endl;
	}
	else
	{
		cout<< (n/m) * b + min((n%m) * a,b) << "\n";

	}

	return 0;

}