class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        n1 = m - 1
        n2 = n - 1
        c = m + n - 1

        while n2 >= 0:
            if n1 >= 0 and nums1[n1] > nums2[n2]:
                nums1[c] = nums1[n1]
                n1 -= 1
            else:
                nums1[c] = nums2[n2]
                n2 -= 1
            c -= 1
