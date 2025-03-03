class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:


            temp = []
            arr = []
            for i in range(len(nums1)) :
                temp.append(nums1[i][0])

            for i in range(len(nums2)) :
                temp.append(nums2[i][0])


            temp.sort()
            maks = temp[len(temp)-1]


            for i in range(1,maks+1) :
                res = 0
                check = False
                for j in range(len(nums1)) :
                    if nums1[j][0] == i :
                        res += nums1[j][1]
                        check = True
                    
                for j in range(len(nums2)) :
                    if nums2[j][0] == i :
                        res += nums2[j][1]
                        check = True
                if check :
                    arr.append([i,res])
                
        
            return arr