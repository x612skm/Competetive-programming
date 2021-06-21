#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll N=3E5+5;
const ll MOD=1E9+7;

vector<pair<ll, ll>> pair_value;
vector<ll> edges[N], child_values, node_values;

void thouses_solution(ll lowest, ll highest=-1)
{
	for(auto it : edges[lowest]){
		if(it==highest){
			continue;
		}
		thouses_solution(it,lowest);
	}
	pair_value.clear();

	for(auto it:edges[lowest]){
		if(it!=highest){
			pair_value.emplace_back(child_values[it],it);
		}
	}
	sort(pair_value.rbegin(), pair_value.rend());

	ll thouses_val = 1;

	for(auto [first,second] : pair_value){
		node_values[second] = thouses_val++;
	}
	for(auto it:edges[lowest]){
		if(it!=highest){
			ll cnt = node_values[it]*child_values[it];
			child_values[lowest] += cnt;
		}
	}

}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,it;
		cin>>n>>it;

		for(ll i=0; i<n; ++i){
			vector <ll>().swap(edges[i]);
		}

		for(ll i=0; i<n-1; ++i){
			ll u,v;
			cin>>u>>v;
			--u;
			--v;
			edges[u].emplace_back(v);
			edges[v].emplace_back(u);
		}
		child_values.assign(n,1);
		node_values.assign(n,0);

		thouses_solution(0);

		cout<<((child_values[0] % MOD) * (it % MOD)) % MOD <<endl;
		child_values.clear();
		node_values.clear();
	}
	return 0;
}