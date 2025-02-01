class Solution(object):
    def runningSum(self, nums):
        arr = []
        for i in range(len(nums)) :
            temp = 0
            for j in range(0,i+1) :
                temp += nums[j]
        
            arr.append(temp)
        return arr
        