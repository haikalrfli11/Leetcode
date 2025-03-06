class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:

            n = len(grid)**2
            arr = []

            for i in range(len(grid)) :
                for j in range(len(grid[i])) :
                    arr.append(grid[i][j])

            arr.sort()

            rep = 0
            for i in range(len(arr)-1) :
                if(arr[i] == arr[i+1]) :
                    rep = arr[i]

            mis = 0
            for i in range(1,n+1) :
                if i not in arr :
                    mis = i

            return [rep,mis]