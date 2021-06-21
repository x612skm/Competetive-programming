#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a, b= "hello";
	int j=0, pass=0;

	cin>>a;

	for(int i=0; i<a.size(); i++)
	{
		if(a[i]==b[j]){
			j++;
			pass++;

			if(pass==5){
				break;
			}
		}
	}
	if(pass == 5){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}