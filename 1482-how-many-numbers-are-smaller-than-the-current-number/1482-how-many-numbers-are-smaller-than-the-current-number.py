class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        arr = []
        for i in range(0,len(nums)) :
            total = 0
            for j in range(0, len(nums)) :
                if nums[j] < nums[i] and i != j :
                    total +=1
            arr.append(total)
        return arr
        