class Solution(object):
    def maxDifference(self, s):
            arr = []

            for i in s :
                arr.append(i)

            arr.sort()
            odd = 1
            even = 101
            total = 1
            maks = 0
            for i in range(len(arr)-1) :
                if arr[i] == arr[i+1] :
                    total += 1
                else :
                    if total % 2 != 0 and total >= odd :
                        odd = total
                    elif total % 2 == 0 and total <= even :
                        even = total

                    total = 1

            if total % 2 != 0 and total >= odd :
                        odd = total
                        total = 1
            elif total % 2 == 0 and total <= even :
                        even = total
                        total = 1

            return odd-even
        