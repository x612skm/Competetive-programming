/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin>>n;
	int count=0;
	int s=1, h=2, d=3;
	solve(n,s,h,d,count);
	cout<<count<<endl;
	return 0;

}
void solve(int s, int d, int h,int n, int& count)
{
	//base conditon
	if(n==1)
	{
		cout<<s<<" "<<d;
		count++;
		return;
	}
	else{
	solve(s,h,d,n-1);
	count++;
	cout<<s<<" "<<d;

	solve(h,d,s,n-1);
	count++;
	cout<<h<<" "<<d;
}	

}
*/
#include<bits/stdc++.h>
using namespace std;


#define endl '\n'

void solve(int a, int b, int c, int n) {
	if (n == 0)
		return;
	solve(a, c, b, n-1);
	cout<<a<<' '<<c<<endl;
	solve(b, a, c, n-1);
}

int main(){
    
    
    int n; cin>>n;
    cout<< (pow(2,n)-1) <<endl;// 1 se n lekr -1 tak(time saver direct math 2^n-1)
    //cout<<(1<<n)-1<<endl; // this is also correct
    solve(1, 2, 3, n);
    return 0;
}

