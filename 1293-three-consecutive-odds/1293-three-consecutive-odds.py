class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:


                check  = False

                for i in range(len(arr)) :
                    if i == len(arr)-2 or len(arr) < 3 :
                        break
                    elif arr[i] % 2 != 0 and arr[i+1] % 2 != 0 and arr[i+2] % 2 != 0 :
                        check = True

                
                return check