from typing import TypeVar, Set, Dict, Tuple, Sequence, List, Any
ListNode = TypeVar('ListNode')
import math

"""
36 ms	(76.87%) 13.7 MB (7.14%)
"""
def pascalTriangleBruteForce(numRows: int) -> List[List[int]]:
  output = []
  tmp = []
  for i in range(1,numRows+1):
    if len(tmp)==0:
      tmp = [1]
      output.append([1])
    else:
      bt = [0] + tmp + [0]
      tmp = [ bt[j]+bt[j+1] for j in range(len(bt)-1)]
      output.append(tmp)
  
  return output

"""
Recurrsion version: exceed time limitation (FAIL)
"""
def pascalTriangleRecurrsion(numRows: int) -> List[List[int]]:
  def f(tmp_arr, num):
    if len(tmp_arr) == 0:
      return [[1]] + f([1],num-1)

    bt = [0]+tmp_arr+[0]
    tmp = [ bt[j]+bt[j+1] for j in range(len(bt)-1)]
    if num-1==0:
      return [tmp]
    else:
      return [tmp] + f(tmp,num-1)

  return f([],numRows)

"""
32 ms (94.54%)	13.8 MB	(7.14%)
"""
def pascalTriangle(numRows: int) -> List[List[int]]:
  output = []
  for i in range(numRows):
    if len(output)==0:
      output.append([1])
    else:
      bt = [0] + output[i-1] + [0]
      output.append([ bt[j]+bt[j+1] for j in range(len(bt)-1)])

  return output

