#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int n, ele;
    cin>>n;
    set<int> s;
    while(n--)
    {
        cin>>ele;
        s.insert(ele);
    }
    cout<<s.size(); //properties of set
    return 0;
}