import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.array._54_SpiralMatrix import * 

arr = [[1,2,3],[4,5,6],[7,8,9]]
ans = [1,2,3,6,9,8,7,4,5]
assert(ans == findDiagonalOrder(arr))


print("All pass")