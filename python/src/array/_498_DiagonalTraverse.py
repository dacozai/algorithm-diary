from typing import TypeVar, Set, Dict, Tuple, Sequence, List, Any
ListNode = TypeVar('ListNode')
import math

"""
324 ms (5.02%)	16.6 MB (16.67%) One of the worst solution
"""
def findDiagonalOrderBruteForce(matrix: List[List[int]]) -> List[int]:
  if matrix == []:  return [] 
  delta = [-1,1]
  r_ct = 0
  c_ct = 0
  R_LEN = len(matrix)
  C_LEN = len(matrix[0])
  output = []
  def boundCheck(indx, LEN):
    if indx>-1 and indx<LEN:
      return True
    return False
  
  while True:
    output.append(matrix[r_ct][c_ct])
    if boundCheck(r_ct+delta[0], R_LEN) and boundCheck(c_ct+delta[1], C_LEN):
      r_ct += delta[0]
      c_ct += delta[1]
    else:
      if r_ct+delta[0] > R_LEN-1:
        if c_ct+delta[1] < 0:
          if boundCheck(c_ct+1, C_LEN):
            c_ct+=1
            delta = [-1,1]
          else:
            if boundCheck(r_ct+1, R_LEN):
              r_ct+=1
            else:
              break
        else:
          if boundCheck(c_ct+1, C_LEN):
            c_ct+=1
            delta = [-1,1]
          else:
            break
      elif r_ct+delta[0] < 0:
        if c_ct+delta[1] > C_LEN-1:
          if boundCheck(r_ct+1, R_LEN):
            r_ct+=1
            delta=[1,-1]
          else:
            if boundCheck(c_ct+1, C_LEN):
              c_ct+=1
            else:
              break
        else:
          c_ct+=1
          delta=[1,-1]
      elif c_ct+delta[1] < 0:
        if boundCheck(r_ct+1, R_LEN):
          r_ct+=1
          delta=[-1,1] 
        else:
          if boundCheck(c_ct+1, C_LEN):
            c_ct+=1
          else:
            break 
      elif c_ct+delta[1] > C_LEN-1:
        if boundCheck(r_ct+1, R_LEN):
          r_ct+=1
          delta=[1,-1]
        else:
          break
      else:
        break
  

  return output