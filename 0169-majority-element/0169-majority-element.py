class Solution(object):
    def majorityElement(self, nums):
        nums.sort()
        temp = 1
        max_count = 0
        element = nums[0]
        for i in range(len(nums)-1) :
            if nums[i] == nums[i+1] :
                temp += 1
            elif nums[i] != nums[i+1] :
                temp =1
            if temp > max_count :
                max_count = temp
                element = nums[i]
        return element     
            