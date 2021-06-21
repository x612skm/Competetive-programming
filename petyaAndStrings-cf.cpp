#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s,d;
	cin>>s>>d;
	for(int i=0; i<s.size();i++){
		if(s[i] < 92){
			s[i] += 32;
		}
		if(d[i]<92)
		{
			d[i] +=32;
		}
	}
	if(s<d){
		cout<<-1;
	}
	else if(s>d){
		cout<<1;
	}
	else if(s == d){
		cout<<0;
	}


}