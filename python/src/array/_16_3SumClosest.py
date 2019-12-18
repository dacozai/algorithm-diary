from typing import TypeVar, Set, Dict, Tuple, Sequence, List, Any
ListNode = TypeVar('ListNode')
import math

def threeSumClosest(nums: List[int], target: int) -> int:
  dd = dict()
  for elem in nums:
    if elem not in dd:
      dd[elem] = {"num":1}
    else:
      dd[elem]["num"] += 1
      if dd[elem]["num"] > 2 and dd[elem]*3 == target:
        return target

  
  print(dd)

    
  
  return 2