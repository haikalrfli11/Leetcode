class Solution(object):
    def isArraySpecial(self, nums):
         for i in range(len(nums)-1) :
            if (nums[i] % 2 == 0 and nums[i+1] % 2 == 0) or nums[i] % 2 != 0 and nums[i+1] % 2 != 0 :
                return False
    
         return True
    