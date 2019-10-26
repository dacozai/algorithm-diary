import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.array._119_GetPascalRow import * 

num = 3
assert([1,3,3,1] == getPascalRow(num))
num = 0
assert([1] == getPascalRow(num))


print("All pass")