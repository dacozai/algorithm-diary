import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.array._53_maxSubArray import * 

arr = [-2,1,-3,4,-1,2,1,-5,4,-1]
assert(6 == maxSubArray(arr))
arr = [-1,5,4,3,-1,4,5,6,-1,10,20]
assert(55 == maxSubArray(arr))
arr = [-1,0,-2]
assert(0 == maxSubArray(arr))


print("All pass")