#using sliding window algorithm identify how mnay substrings are there in total if there are many more repeated
#for example if abcabcab count then it have output as abc or 3


class Solution:
	def lengthOfLongestSubstring(self, s):
		dicts = {} #starting the index with this number 
		maxlength = start = 0 #creating the list empty
		for i,value in enumerate(s):#it is the iteration that goes on while askingfor in the loops
			if value in dicts: #jo value starting mey hay 
				sums = dicts[value] + 1 #sum jo hai dicts value itrerate to 1
				if sums > start: #sum greater than start
					start=sums#if the sums is not greter then the required solutin
			num = i - start +1 
			if num> maxlength:
				maxlength = num
			dicts[value] = i
		return maxlength
"""

# length if the longest substring without repeating characters

#o(n^2) sliding window
#solution from the geeksforgeeks
def LengthOfLongestSubstring(str):
	n = len(str)#making the length of the string into the desired input
	#result
	res=0
	for i in range(n):
		#main note : Default values are visited that are false
		visited=[0] * 256 # as the default values that visites turned into nothing so that original is counted everytime
		for j in range(i,n):#taking counting the j value remaining or keeping the i side closed and n side as counting
			#if current character is visited break the loop
			if(visited[ord(str[j])] == True):
				break
			#else update the result if this window is larger, and mark current character as visited
		else:
			res=max(res, j-i+1)#updation of the data
			visited[ord(str[i])] = False #making the character visited so that it could remain stop 
	return res

	#algo could be written as 
	
	make a variable that is th length of the string 
	make the result as 0
	make the loop for taking n length in counting
	and make all the visited default nodes as the zero multiplied so that false nodes cannot enter the procedure
	#sliding window is a closed window one side open and one side closed make the [i,j) procedure format where one can
	skip if the node visited is again repeted and termed as the visited node as the main node and make increment in the closed procedure and 
	turn the next into j' where if j' comes then i=j'+1
	taking the 
	if node or character visited then break 
	else
	continue
	update the node 
	visited = false 
"""



