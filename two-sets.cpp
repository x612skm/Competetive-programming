#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	ll t = n*(n+1)/2; //splitting into the middle

	if(t%2)
		cout<<"NO\n";
	else
	{
		t/=2;
		vector<int> a;
		ll s=0;
		ll e =0;
		ll i =n;
		while(true)
		{
			a.push_back(i);
			s+= i--;
			e=t-s;
			if(!e)
				break;
			if(e<=i)
			{
				a.push_back(e);
				break;

			}
		}
		cout<< "YES\n"<<a.size()<<endl;
		for(int j=0; j<a.size(); j++)
		{
			cout<<a[j];
			if(j<a.size()-1)
				cout<< " ";
		}
		cout<< endl;
		cout<<n-a.size()<<endl;
		for (ll j=i; j>0; j--){
			if(j==e)
				continue;
			cout<<j;
			if((e != 1 && j>1)||(e==1 && j>2))
				cout<<" ";
		}
		cout<<endl;
	}

}
/*
n = int(input())



a = []

b = []



c = n*(n+1)//2



if c%2==1:

    print("NO")



else:



    print("YES")

    c //= 2



    while (n):

        if (c - n >= 0):

            a.append(n)

            c -=n

        

        else:

            b.append(n)

        

        n -=1

    

    print(len(a))

    print(*a)

    print(len(b))

    print(*b)
*/