class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        i=1
        cnt=0
        while cnt<k:
            if i not in arr:
                cnt=cnt+1
            i=i+1
        return i-1
        