import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.py_sol import Solution

sol = Solution()
input_var = "III"
assert( sol.romanToInt(input_var) )

print("All pass")