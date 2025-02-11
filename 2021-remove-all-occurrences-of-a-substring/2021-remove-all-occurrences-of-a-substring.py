class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:

        temp = s

        while part in temp :
            idx= temp.index(part)
            length = len(part)
            temp = temp[:idx] + temp[idx+length::]

        
        return temp
