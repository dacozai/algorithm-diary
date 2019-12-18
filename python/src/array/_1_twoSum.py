from typing import TypeVar, Set, Dict, Tuple, Sequence, List, Any
import math

def twoSum(nums: List[int], target: int) -> List[int]:
  hash_dict = {}
  for indx, value in enumerate(nums):
    remain = target - value
    if remain in hash_dict:
      if hash_dict[remain] > indx:
        return [indx, hash_dict[remain]] 
      return [hash_dict[remain], indx]
    hash_dict[value] = indx
  return []