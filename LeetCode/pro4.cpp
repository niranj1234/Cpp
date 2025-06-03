// https://leetcode.com/problems/median-of-two-sorted-arrays/description/

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        a=nums1+nums2
        a.sort()
        z = len(a)
        if (len(a)%2 == 0):
            d = len(a)//2
            s= sum(a[d-1:d+1])/2
        else:
            x = len(a)//2
            s= float(a[x])
        return s
