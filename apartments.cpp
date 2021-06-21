#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
	ll n, m , k;
	cin>>n>>m>>k; //n is the number of people
	vector <int> people(n);
	vector <int> apartments(m);

	for(int i=0; i<n ; i++)
		cin>>people[i];
	for(int i=0; i<m; i++)
		cin>>apartments[i];

	sort(people.begin(), people.end());
	sort(apartments.begin(), apartments.end());

	int ans = 0;
	int i=0 , j=0;
	while(i<n && j<m)
	{
		if(abs(people[i]-apartments[j]) <= k ) // this abs defiened as the absolute function of the integer number
		{
			ans++;
			i++;
			j++;
		}
		else if(people[i]<apartments[j])
		{
			i++;
		}
		else
		{
			j++;
		}	 
	}
	cout<< ans;
	return 0;

}