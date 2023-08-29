#Link: https://leetcode.com/problems/jump-game/

class Solution:
    def canJump(self, nums: List[int]) -> bool:
        index = len(nums) - 1

        for i in range(len(nums) - 2, -1, -1):
            if i + nums[i] >= index:
                index = i
        
        return index == 0
