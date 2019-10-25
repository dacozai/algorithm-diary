import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.py_sol import Solution

sol = Solution()
input_var = [1,1,2]
assert( 2 == sol.removeDuplicates(input_var) )
input_var = [0,0,1,1,1,2,2,3,3,4]
assert( 5 == sol.removeDuplicates(input_var) )
input_var = [0,0]
assert( 1 == sol.removeDuplicates(input_var) )


print("All pass")