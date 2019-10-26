import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.array._118_Pascal import * 

num = 5
print(pascalTriangle(num))
assert(2 == pascalTriangle(num))


print("All pass")