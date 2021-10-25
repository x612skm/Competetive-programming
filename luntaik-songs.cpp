// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int a,b,c;
// 		cin>>a>>b>>c;
// 		if(a==b && b==c) {
// 			cout<<"0\n";
// 		}
// 		else {
// 			cout<<"1\n";
// 		}
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

main(){
	 ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, a,b,c;
    cin>>t;
    while(t--){
    	cin>>a>>b>>c;
    	cout<<(a+c)%2<<'\n';
    }
    return 0;
}