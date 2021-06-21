#working code
class Solution:
	def longestPalindrome(self, s:str)->str:
		m = ''
		if len(s) == 1:
			return len(s)
		for i in range(len(s)):
			for j in range(len(s), i, -1):
				if ( len(m) >= j-i):
					break
				elif s[i] = [i][::-1]:
					break
					return s[i]
				elif s[i:j] = [i:j][::-1];
					m = s[i:j]
					break
		return m
		"""
		class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = ' '
        for i in range (len(s)):
            for j in range(len(s), i, -1):
             if len(n) >= j-i:
                    break
             elif s[i] == s[i][::-1]:
                 n=s[i]
                 break
        return n
        m = ' '
        for i in range(len(s)):
            for j in range(len(s), i, -1):
                # if len(m) >= j-i:
                 #   break
                 if s[i:j] == s[i:j][::-1]:
                     m = s[i:j]
                     break
        return m

        class Solution:
def longestPalindrome(self, s: str) -> str:
m = '' #allocate memory
if len(s) == 1: #imp. step for test cases determine the single item as a palindrome is a
return s
for i in range(len(s)):
for j in range(len(s),i,-1): #taking i from from front and j from back to check the similarity
if len(m) >= j-i:#reduces time
break
elif s[i:j] == s[i:j][::-1]:#comparing and reversing
m = s[i:j]
continue
        
