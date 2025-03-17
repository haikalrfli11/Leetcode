class Solution:
    def divideArray(self, nums: List[int]) -> bool:

                nums.sort()


                temp = 1
                total = 0
                for i in range(len(nums)-1) :
                    if nums[i] == nums[i+1] :
                        temp +=1
                    
                    else :
                    
                        if(temp % 2 ==0) :
                            total += temp/2
                        

                        temp = 1


                if(temp % 2 == 0) :
                    total += temp/2  

                if total == len(nums) / 2 :
                    return True
                else :
                    return False
