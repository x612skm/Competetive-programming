//good to go code 
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int input[500], output[500], count, i;

	cin>>count; // test case 
	for(int i=0; i < count; i++)
	{
		cin>>input[i];
	}

	//copy array in reverse order
	for(int i=0; i<count; i++)
	{
		output[i] = input[count-i-1]; //to make the code reverse

	}
	//oyutput the code 
	for(int i=0; i<count; i++)
	{
		cout<<output[i]<<" ";
	}
	return 0;
}