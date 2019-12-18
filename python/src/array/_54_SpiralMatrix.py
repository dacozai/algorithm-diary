from typing import TypeVar, Set, Dict, Tuple, Sequence, List, Any
ListNode = TypeVar('ListNode')
import math

def spiralOrder(matrix: List[List[int]]) -> List[int]:
  if matrix == []:  return [] 
  H_B = 0
  V_B = 1
  H_E = len(matrix)
  V_E = len(matrix[0])
  pos = 0
  indx = [0,0]
  fourDirection = [[0,1],[1,0],[0,-1],[-1,0]]




