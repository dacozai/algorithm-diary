from typing import TypeVar, Set, Dict, Tuple, Sequence, List, Any
ListNode = TypeVar('ListNode')
import math

"""
Dict Version
Time: O(N^2+N), space: O(N)
1044 ms	(43.65%) 22.1 MB (5.71%)
"""
def threeSumFirst(nums: List[int]) -> List[List[int]]:
  dd = dict()
  for elem in nums:
    if elem not in dd:
      dd[elem] = {"num":1}
    else:
      dd[elem]["num"] += 1

  # print(dd)
  ans = []
  ansDict = {}
  for i in dd:
    for j in dd:
      r = 0 - i - j
      if r in dd:
        flag = True
        if r == i and r == j and dd[r]["num"]<3:
          flag = False
        elif r == i and dd[r]["num"]<2:
          flag = False
        elif r == j and dd[r]["num"]<2: 
          flag = False
        elif i == j and dd[i]["num"]<2: 
          flag = False

        if flag:
          if frozenset([i, j, r]) not in ansDict:
            ansDict[frozenset([i, j, r])] = True
            ans.append([i, j, r])
  # print(ans)

  # return ans
  return ansDict

"""
Sort version
Time: O(N^2), space: O(1)
660 ms (94.84%) 17.1 MB (25%)
Recerefer: HT_Wang https://leetcode.com/problems/3sum/discuss/410709/python-double-pointer-(faster-than-96)
"""
def threeSum(nums: List[int]) -> List[List[int]]:
  """
  :type nums: List[int]
  :rtype: List[List[int]]
  """
  nums.sort()
  
  out = []
  i = 0
  n = len(nums)
  for i in range(n):            
    # 避免0以及相同的數字
    if i>0 and nums[i]==nums[i-1]:
      continue                 

    if nums[i]>0:
      break      
    target = -nums[i]              
    l, r = i+1, n-1
    while(l<r):                
      tmp = nums[l]+nums[r]
      if tmp==target:
        out.append([nums[i], nums[l], nums[r]])
        l+=1
        r-=1
        while l<r and nums[l]==nums[l-1]:
          l+=1
        while r>l and nums[r]==nums[r+1]:
          r-=1    
      elif tmp>target:
        r-=1
      else:
        l+=1

  return out

"""
Is it possible to make it O(N)
"""
def threeSumNotYet(nums: List[int]) -> List[List[int]]:
  dd = dict()
  ansDict = {"F":dict(), "S":dict()}
  for elem in nums:
    if elem not in dd:
      dd[elem] = {"num":1}
      ansDict["F"][0-elem] = True 
    else:
      dd[elem]["num"] += 1

  print(dd)
  print(ansDict)
  td = {}
  ans = []
  for elem in dd:
    for remain in ansDict["F"]:
      r = remain - elem
      if r in td and :
        


  ans = []
  return ans

