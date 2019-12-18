import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.py_sol import Solution
import time

sol = Solution()
arr = [3,2,2,3]
val = 3 
assert(2 == sol.removeElement(arr, val))
arr = [0,1,2,2,3,0,4,2]
val = 2
assert(5 == sol.removeElement(arr, val))

print("All pass")