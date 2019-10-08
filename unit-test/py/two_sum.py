import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.py_sol import Solution

sol = Solution()
example_nums = [2,11,7,15]
target = 9
assert([0,2] == sol.twoSum(example_nums, target))

print("All Pass")