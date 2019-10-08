from typing import Set, Dict, Tuple, Sequence, List, Any

class Solution:
  def twoSum(self, nums: List[int], target: int) -> List[int]:
    """
    Name: One-Pass solution
    hash_dict: hash table to record number
    Time Complexity: O(n)
    Space Complexity: O(n)
    """
    hash_dict = {}
    for indx, value in enumerate(nums):
      remain = target - value
      if remain in hash_dict:
        if hash_dict[remain] > indx:
          return [indx, hash_dict[remain]] 
        return [hash_dict[remain], indx]
      hash_dict[value] = indx
    return []
  
  def twoSum_sorted(self, numbers: List[int], target: int) -> List[int]:
    """
    Name: One-Pass solution
    hash_dict: hash table to record number
    Time Complexity: O(n)
    Space Complexity: O(n)
    """
    hash_dict = {}
    for indx, value in enumerate(numbers):
      remain = target - value
      if remain in hash_dict:
        if hash_dict[remain] > indx:
          return [indx+1, hash_dict[remain]+1] 
        return [hash_dict[remain]+1, indx+1]
      hash_dict[value] = indx
    return []
  
  def maxArea(self, height: List[int]) -> int:
    right = len(height) - 1
    maxarea = 0
    left = 0

    while (left < right):
      maxarea = max(maxarea, min(height[left], height[right]) * (right - left))
      if height[left] < height[right]:
        left += 1
      else:
        right -=1

    return maxarea

  def reverse(self, x: int) -> int:
    if x > 0:   
      num =  int(str(x)[::-1])  
    else:    
      num = -1 * int(str(x*-1)[::-1])  

    if num > 2**31 - 1 or num < 2**31 * -1: return 0
    return num
  
  def myAtoi(self, str: str) -> int:
    str