import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.array._498_DiagonalTraverse import * 

arr = [[1,2],[3,4]]
ans = [1,2,3,4]
assert(ans == findDiagonalOrder(arr))
arr = [[1],[2]]
ans = [1,2]
assert(ans == findDiagonalOrder(arr))
arr = []
ans = []
assert(ans == findDiagonalOrder(arr))
arr = [ [ 1, 2, 3 ],[ 4, 5, 6 ],[ 7, 8, 9 ] ]
ans = [1,2,4,7,5,3,6,8,9]
assert(ans == findDiagonalOrder(arr))
arr = [[1,2,3,4,5]]
ans = [1,2,3,4,5]
assert(ans == findDiagonalOrder(arr))
arr = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
ans = [1,2,5,9,6,3,4,7,10,13,14,11,8,12,15,16] 
assert(ans == findDiagonalOrder(arr))
arr = [[1,2,3,4,5],[2,3,4,5,6],[3,4,5,6,7],[4,5,6,7,8],[5,6,7,8,9]]
ans = [1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,7,7,7,8,8,9] 
assert(ans == findDiagonalOrder(arr))
arr = [[2,5],[8,4],[0,-1]]
ans = [2,5,8,0,4,-1]
assert(ans == findDiagonalOrder(arr))


print("All pass")