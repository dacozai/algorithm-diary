import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.py_sol import Solution

sol = Solution()
heights = [1,8,6,2,5,4,8,3,7]
assert(49 == sol.maxArea(heights))
heights = [1,1]
assert(1 == sol.maxArea(heights))
heights = [1,2,1]
assert(2 == sol.maxArea(heights))
heights = [2,1]
assert(1 == sol.maxArea(heights))
heights = [1,2]
assert(1 == sol.maxArea(heights))
print("All Pass")