def solution(nums):
    numSet = set(i for i in nums)
    
    return min(len(numSet), len(nums) / 2)