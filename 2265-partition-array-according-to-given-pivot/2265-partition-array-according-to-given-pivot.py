class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:

                sm = []
                eq = []
                gr = []
                for i in nums :
                    if i < pivot :
                        sm.append(i)
                    elif i == pivot :
                        eq.append(i)
                    else :
                        gr.append(i)
                
                return sm + eq + gr