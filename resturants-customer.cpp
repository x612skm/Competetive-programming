#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll n,x,y,curr_people=0, max_people=0;
	vector<pair<int,bool>> arr;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		arr.push_back(make_pair(x, true));//entry ko pair me lia x ko true karke 
		arr.push_back(make_pair(y,false));

	}


	sort(arr.begin(), arr.end());//x ke basis pe sort kia 
	for(int i=0; i< arr.size(); i++)
	{
		curr_people+=arr[i].second ? 1: -1;//curr mey tabhi add karna hay jb uske next wala usse badmay pehle nikle
		max_people = max(max_people, curr_people);
	}
	cout<<max_people;
	return 0;
}