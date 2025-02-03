class Solution(object):
    def longestMonotonicSubarray(self, nums):
            inc = 1
            dec = 1

            maks = 1

            for i in range(len(nums)-1) :
                if nums[i] < nums[i+1] :
                    inc += 1
                    if inc >= maks and inc >= dec :
                        maks = inc
                    dec = 1
                elif nums[i] > nums[i+1] :
                    dec += 1
                    if dec >= maks and dec >= inc :
                        maks = dec
                    inc = 1
                else :
                    inc = 1
                    dec = 1
            
            return maks
        