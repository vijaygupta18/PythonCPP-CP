#https://leetcode.com/problems/merge-intervals/

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals=sorted(intervals)
        a=len(intervals)
        b=[]
        beg=intervals[0][0]
        end=intervals[0][1]
        for x in range(a-1):
            if end>=intervals[x+1][0]:
                if intervals[x+1][1]>end:
                    end=intervals[x+1][1]
            else:
                b.append([beg,end])
                beg=intervals[x+1][0]
                end=intervals[x+1][1]
        b.append([beg,end])
        return b
                    
        
        
