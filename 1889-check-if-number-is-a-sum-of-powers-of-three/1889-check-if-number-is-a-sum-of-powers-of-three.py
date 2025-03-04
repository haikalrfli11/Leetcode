class Solution:
    def checkPowersOfThree(self, n: int) -> bool:

                arr = []


                while n > 0 :
                    power = int(math.log2(n) / math.log2(3))
                    arr.append(math.pow(3,power))
                    n -= math.pow(3,power)

                arr.sort()

                for i in range(len(arr)-1) :
                    if arr[i] == arr[i+1] :
                        return False
                    
                return True