//march21c
/*
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>

using namespace std;

int main(){
	int flag=0;
	int t; cin>>t;
	int a[20][20],b[20][20];
	while(t--)
	{
		int diff;
		int r,c,x,i,j;
		cin>>r>>c>>x;
	if(c<x){
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(a[i][j]==b[i][j]){continue;}
				else{flag=1;break;}
			
			}
		}
		if(flag==1)
			cout<<"no"<<'\n';
			else
			cout<<"Yes"<<"\n";
		
	}
	else if(r<x && c>x)
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c-x;j++)
				{
					if(a[i][j] != b[i][j])
					{
						int diff = b[i][j]-a[i][j];
						for(int k=j;k<j+x;k++)
						{
							a[i][k]+=diff;
						}
					}
				
				}
			}
			if(a[i][j]==b[i][j])
				cout<<"Yes"<<"\n";
				else
				cout<<"No"<<"\n";
		}
	else if(r>x && c<x)
		{
			for(i=0;i<c;i++)
			{
				for(j=0;j<r-x;j++)
				{
					if(a[j][i] != b[j][i])
					{
						diff = b[i][j]-a[j][i];
						for(int k =j;k<j+x;k++)
						{
						a[k][i] +=diff;
						}
					}
				
				}
			}
			if(a[i][j]==b[i][j])
				cout<<"Yes";
				else
				cout<<"No";
		}
	
	else(c>x);
	{
		for(i=0;i<c;i++)
		{
			for(j=0;j<r-x;j++){
				if(a[j][i] != b[j][i])
				{
					diff=b[j][i]-a[j][i];
					a[j][i]+=diff;
				}
			}
		}
		for(i=0;i<r;i++){
			for(j=0; j<c-x;j++)
			{
				if(a[i][j] != b[i][j]){
					diff = b[i][j] -a[i][j];
					for(int k=j;k<j+x;k++)
						a[i][k]+=diff;
				}

			}
		}
		if(a[i][j]==b[i][j])
			cout<<"Yes";
		else
			cout<<"No";
	}
	}
	return 0;
}
*/
//march21c
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>

using namespace std;

int main(){
	int flag=0;
	int t; cin>>t;
	int a[20][20]; int b[20][20];
	while(t--)
	{
		int diff;
		int r,c,x,i,j;
		cin>>r>>c>>x;
	    if(c<x){
	    for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(a[i][j]==b[i][j]){continue;}
				else{flag=1;break;}
			if(flag==1)
			cout<<"no"<<'\n';
			else
			cout<<"Yes"<<"\n";
			}
		}
		
	}
	else if(r<x && c>x)
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c-x;j++)
				{
					if(a[i][j] != b[i][j])
					{
						int diff = b[i][j]-a[i][j];
						for(int k=j;k<j+x;k++)
						{
							a[i][k]+=diff;
						}
					}
				if(a[i][j]==b[i][j])
				cout<<"Yes"<<"\n";
				else
				cout<<"No"<<"\n";
				}
			}
		}
	    else if(r>x && c<x)
		{
			for(i=0;i<c;i++)
			{
				for(j=0;j<r-x;j++)
				{
					if(a[j][i] != b[j][i])
					{
						diff = b[i][j]-a[j][i];
						for(int k =j;k<j+x;k++)
						{
						a[k][i] +=diff;
						}
					}
				if(a[i][j]==b[i][j])
				cout<<"Yes"<<"\n";
				else
				cout<<"No"<<"\n";
				}
			}
		}
		else if(c>x)
	    {
		for(i=0;i<c;i++)
		{
			for(j=0;j<r-x;j++){
				if(a[j][i] != b[j][i])
				{
					diff=b[j][i]-a[j][i];
					a[j][i]+=diff;
				}
			}
		}
		for(i=0;i<r;i++){
			for(j=0; j<c-x;j++)
			{
				if(a[i][j] != b[i][j]){
					diff = b[i][j] -a[i][j];
					for(int k=j;k<j+x;k++)
						a[i][k]+=diff;
				}

			}
		}
		if(a[i][j]==b[i][j])
			cout<<"Yes"<<"\n";
		else
			cout<<"No"<<"\n";
	}
	

	}
	return 0;
	
}