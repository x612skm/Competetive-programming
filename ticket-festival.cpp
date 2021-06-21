#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ll n,x,y,total=0, curr_end=0;
	vector<pair<int, int>> arr;
	cin>>n;
	while(n--){
		cin>>x>>y;
		arr.push_back(make_pair(y,x));
	}
	sort(arr.begin(), arr.end()); // end time so that finished again can start
	for(auto ele: arr){
		if(ele.second >= curr_end)
		{
			curr_end = ele.first;
			total++;
		}
	}
	cout<<total;
	return 0;

}