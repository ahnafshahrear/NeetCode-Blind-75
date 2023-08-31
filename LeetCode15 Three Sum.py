#Link: https://leetcode.com/problems/3sum/

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        result = []
        nums.sort()
        for i, num in enumerate(nums):
            if num > 0:
                break
            if i and num == nums[i - 1]:
                continue
            l, r = i + 1, len(nums) - 1
            while l < r:
                threeSum = num + nums[l] + nums[r]
                if threeSum < 0:
                    l += 1
                elif threeSum > 0:
                    r -= 1
                else:
                    result.append([num, nums[l], nums[r]])
                    l += 1
                    r -= 1
                    while l < r and nums[l] == nums[l - 1]:
                        l += 1
        return result
