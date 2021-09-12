int solution :: solve(std::vector<int> A, int B)
{
	//b is the target sum

	unordered_map<int,int> mp;

	int cnt =0;
	int xorr = 0;

	for(auto it : A)
	{
		xorr = xorr ^ it;

		if(xorr == B)
			cnt++;
	

	if(mp.find(xorr ^ B) != mp.end())
	{
		cnt += mp[xorr ^ B];
	}

	mp[xorr] += 1;
}
return cnt;

}