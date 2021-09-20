#include<bits/stdc++.h>
using namespace std;

//using a comparator 
bool comp(item a, item b)
{
	double r1= (double)a.value/(double)a.weight;
	double r2 = (double)b.value/(double)b.weight;
	return r1 > r2;
}

//function to return the fractional weights
double fractionalKnapsacks(int W, item arr[], int n)
{
	sort(arr,arr+n,comp);

	int curWeight = 0;
	double finalvalue = 0.0;

	for(int i=0; i<n; i++)
	{
		if(curWeight + arr[i].weight <= W){
			curWeight += arr[i].weight;
			finalvalue += arr[i].value;
		}
		//when it fits 0/1 partially
		else
		{
			int remain = W - curWeight;
			finalvalue += (arr[i].value/ (double)arr[i].weight) * (double)remain;
			break;
		}
	}
}return finalvalue;