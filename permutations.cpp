
#include<bits/stdc++.h>

using namespace std;
const int MAX_CHAR = 26;
void permute(string str)
{
	int count;
	sort(str.begin(), str.end());
	do{
		cout<<str<<endl;
		

	}while(next_permutation(str.begin(),str.end()));
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact = fact * i;
    return fact;
}
int countDistinctPermutations(string str)
{
    int length = str.length();
  
    int freq[MAX_CHAR];
    memset(freq, 0, sizeof(freq));
  
    // finding frequency of all the lower case
    // alphabet and storing them in array of
    // integer
    for (int i = 0; i < length; i++)
        if (str[i] >= 'a')
            freq[str[i] - 'a']++;
  
    // finding factorial of number of appearances
    // and multiplying them since they are
    // repeating alphabets
    int fact = 1;
    for (int i = 0; i < MAX_CHAR; i++)
        fact = fact * factorial(freq[i]);
  
    // finding factorial of size of string and
    // dividing it by factorial found after
    // multiplying
    return factorial(length) / fact;
}
int main()
{
	string str; cin>>str;
	
	//cout<<size
	//int result;
	//result = CountPermutation(str);
	//cout<<result<<endl;
	//cout<<str.size()*(str.size()-1)<<endl;
	printf("%d\n", countDistinctPermutations(str));
	permute(str);
	
	return 0;
}

