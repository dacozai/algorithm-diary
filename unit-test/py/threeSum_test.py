import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.array._15_3Sum import * 

arr = [-1,0,1,2,-1,-4]
ans = {frozenset([-1,-1,2]):True,frozenset([-1,1,0]):True} 
assert(ans == threeSum(arr))

"""
arr = [-1,0,1]
ans = [-1,0,1]
assert(ans == sol.threeSum(arr))
"""

print("All pass")