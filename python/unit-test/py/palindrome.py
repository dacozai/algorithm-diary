import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.py_sol import Solution

sol = Solution()
input_var = 121
assert( sol.isPalindrome(input_var) )
input_var = -121
assert( not sol.isPalindrome(input_var) )
input_var = 10
assert( not sol.isPalindrome(input_var) )

print("All pass")