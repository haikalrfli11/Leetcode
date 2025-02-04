class Solution(object):
    def maxAscendingSum(self, nums):
            total = nums[0]
            maks = nums[0]

            for i in range(len(nums)-1) :
                if nums[i] < nums[i+1] :
                    total +=  nums[i+1]
                    if total >= maks :
                        maks = total
                else :
                    total = nums[i+1]
            return maks