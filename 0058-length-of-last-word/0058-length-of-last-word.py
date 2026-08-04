class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        s=list(s)
        i=0
        p=0
        if " " not in s:
            return len(s)
        while i<len(s):
            if s[i]==' ':
                p=i
            i+=1
        return len(s[p+1:])