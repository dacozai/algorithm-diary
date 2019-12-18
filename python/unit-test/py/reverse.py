import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.py_sol import Solution

sol = Solution()
x = 123
assert(321 == sol.reverse(x))
x = -120
assert(-21 == sol.reverse(x))
print("All Pass")