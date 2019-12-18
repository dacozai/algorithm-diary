from typing import TypeVar, Set, Dict, Tuple, Sequence, List, Any
ListNode = TypeVar('ListNode')
import math

"""
FAIL - exceed time limitation O(N^2)
"""
def maxSubArrayBruteForce(nums: List[int]) -> int:
  LEN = len(nums)
  if LEN == 1:  nums[0]
  output = 'a' 
  
  for i in range(LEN):
    for j in range(i+1,LEN+1):
      if output is 'a' or output < sum(nums[i:j]):
        output = sum(nums[i:j])
  
  return output

"""
Dynamic Programming
72 - 80 ms	(93.33% - 53.56%) 14.7 MB (5.69%) O(N)
"""
def maxSubArray(nums: List[int]) -> int:
  output = nums[0]
  for i in range(1, len(nums)):
    nums[i] = max(nums[i], nums[i] + nums[i-1])
    if nums[i] > output:
      output = nums[i] 
  
  return output












