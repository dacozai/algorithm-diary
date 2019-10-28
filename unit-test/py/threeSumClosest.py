import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.array._16_3SumClosest import * 

arr = [-1, 2, 1, -4]
val = 1 
assert(2 == threeSumClosest(arr, val))

print("All pass")