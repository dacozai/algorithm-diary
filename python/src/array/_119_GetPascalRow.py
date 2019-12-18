from typing import TypeVar, Set, Dict, Tuple, Sequence, List, Any
ListNode = TypeVar('ListNode')
import math

def getPascalRowIntuitive(rowIndex: int) -> List[int]:
  if rowIndex is 0: return [1]
    
  output = [1]
  for i in range(1,rowIndex+1):
    output = [0] + output + [0]
    output = [ output[j]+output[j+1] for j in range(len(output)-1)]
  
  return output

"""
32 ms (94.65%)	13.9 MB (7.69%)
"""
def getPascalRow(rowIndex: int) -> List[int]:
  if rowIndex is 0: return [1]
  output = [1]
  for i in range(1,rowIndex+1):
    output = [1] + [ output[j]+output[j+1] for j in range(len(output)-1)] + [1]

  return output