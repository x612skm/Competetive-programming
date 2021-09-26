//cpp librarires to be written along with the code game
//logic here it is
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;

void findMin(int V)
{
	int deno[] = {1,2,5,10,20,50,100,500,1000};
	int n = 9; // to search for the min

	vector<int> ans; // vector to store the answer

	for(int i=n-1; i>=0; i--){
		while(V>=deno[i]){
			V-=deno[i];
			ans.push_back(deno[i]);
		}
	}

	for(int i=0; i<ans.size(); i++)
		cout<<ans[i]<<" ";
}