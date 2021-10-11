// the idea is to get sorted the all the meetings according to their finishing times 
//after getting sorted in their finishing times they are all managed according to the direction
//once the meeting done new meeting cannot be start from as soon as the old meeting 
//there must be a gap between two meetings return the number of meetings


struct meeting{
	int start;
	int end;
	int pos;
	
}
//making a comparator for the following 
bool comparator(struct meeting m1, meeting m2){
	if(m1.end<m2.end) return true;
	else if(m1.end>m2.end) return false;
	else if(m1.pos<m2.pos) return true;
	return false;

}

void maxMeetings(int s[], int l[], int e[])
{
	struct meeting meet[n];

	//creating an iterator to assign
	for(int i=0; i<n ; i++)
	{
		//iterating to the last element 
		meet[i].start = s[i];
		meet[i].end = e[i];
		meet[i].pos = i+1;
	}

	sort(meet, meet+n, comparator);

	vector<int> answer;

	int limit = meet[0].end;

	//when the meet start

	for(int i=1; i<n; i++){
		if(meet[i].start > limit){
			limit = meet[i].end;
			answer.push_back(meet[i].pos);
		}
	}

	for(int i=0; i<answer.size(); i++){
		cout<<ans[i]<<" ";
	}
}