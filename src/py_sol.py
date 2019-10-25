from typing import TypeVar, Set, Dict, Tuple, Sequence, List, Any
ListNode = TypeVar('ListNode')
import math

class ListNode:
  def __init__(self, x):
    self.val = x
    self.next = None

class Solution:
  # 56 ms	14.9 MB
  def twoSum(self, nums: List[int], target: int) -> List[int]:
    """
    Name: One-Pass solution
    hash_dict: hash table to record number
    Time Complexity: O(n)
    Space Complexity: O(n)
    """
    hash_dict = {}
    for indx, value in enumerate(nums):
      remain = target - value
      if remain in hash_dict:
        if hash_dict[remain] > indx:
          return [indx, hash_dict[remain]] 
        return [hash_dict[remain], indx]
      hash_dict[value] = indx
    return []
  
  def twoSum_sorted(self, numbers: List[int], target: int) -> List[int]:
    """
    Name: One-Pass solution
    hash_dict: hash table to record number
    Time Complexity: O(n)
    Space Complexity: O(n)
    """
    hash_dict = {}
    for indx, value in enumerate(numbers):
      remain = target - value
      if remain in hash_dict:
        if hash_dict[remain] > indx:
          return [indx+1, hash_dict[remain]+1] 
        return [hash_dict[remain]+1, indx+1]
      hash_dict[value] = indx
    return []
  
  # 148 ms	15.5 MB
  def maxArea(self, height: List[int]) -> int:
    right = len(height) - 1
    maxarea = 0
    left = 0

    while (left < right):
      maxarea = max(maxarea, min(height[left], height[right]) * (right - left))
      if height[left] < height[right]:
        left += 1
      else:
        right -=1

    return maxarea

  # 36 ms	 14 MB	
  def reverse(self, x: int) -> int:
    if x > 0:   
      num =  int(str(x)[::-1])  
    else:    
      num = -1 * int(str(x*-1)[::-1])  

    if num > 2**31 - 1 or num < 2**31 * -1: return 0
    return num
  
  # 32 ms	 13.9 MB
  def myAtoi(self, s: str) -> int:
    MAXIMUM = 2147483647
    MINIMUM = -2147483648
    THRESHOLD = 214748364 
    # remove the left side whitespace
    s = s.lstrip()
    length = len(s)
    if length is 0: return 0
    num_len = 0
    neg_flag = False
    st_base = 0

    # Here, we parse string and check this string is a string or a number
    if s[num_len].isalpha():
      return 0
    else:
      if s[num_len] == '-' or s[num_len] == '+': 
        if s[num_len] == '-': 
          neg_flag = True
        st_base = 1
        num_len+=1

      while num_len < length:
        if s[num_len].isdigit():
          num_len+=1
        else: 
          if s[num_len] is '.':
            num_len+=1
          break
          
    # Here, start to calculate the output number
    num = s[0:num_len]
    # deal with sign issue first
    if num_len == 1: 
      if num.isdigit():
        return int(num)
      return 0
    if num_len is 0:  return 0

    # digit guard
    try:
      num = str(int(float(num)))
    except:
      print("This is a problem")
    
    num_len = len(num)

    if neg_flag:
      if num_len > 11:
        return MINIMUM
      elif num_len < 11:
        return int(float(num))
      proxy_num = MINIMUM
      proxy_last = 8
    else:
      if num_len > 10:
        return MAXIMUM
      elif num_len < 10:
        return int(float(num))
      proxy_num = MAXIMUM
      proxy_last = 7

    int_part = int(float(s[st_base:num_len-1]))
    
    if int_part > THRESHOLD:
      return proxy_num
    elif int_part == THRESHOLD and int(s[-1]) > proxy_last:
      return proxy_num
    
    return int(float(num))

  # 56 ms	 14 MB
  def isPalindrome(self, x: int) -> bool:
    x = str(x)
    return x == "".join(list(reversed(x)))

  # 52 ms  14 MB
  def romanToInt(self, s: str) -> int:
    roman_tb = {
      'I': 1,
      'V': 5,
      'X': 10,
      'L': 50,
      'C': 100,
      'D': 500,
      'M': 1000
    }
    sz = len(s)
    num = 0
    indx = 0
    while indx < sz:
      if indx+1 == sz:
        return num+roman_tb[s[indx]] 
      if roman_tb[s[indx]] < roman_tb[s[indx+1]]:
        num += roman_tb[s[indx+1]] - roman_tb[s[indx]] 
        indx+=1
      else:
        num += roman_tb[s[indx]]  
      
      indx+=1

    return num

  def searchInsert(self, nums: List[int], target: int) -> int:
    if target is 0: return 0
    arr_len = len(nums)
    indx = int(arr_len/2) 
    base = 0
    while True:
      if nums[indx] == target:  return indx
      elif nums[indx] > target:
        if indx == 0:  return 0 
        else:
          if nums[indx-1] < target:
            return indx
          elif nums[indx-1] == target:
            return indx-1
          else:
            indx = math.ceil((indx - 1 - base)/2) + base
      else:
        if indx == arr_len - 1: 
          return arr_len
        else:
          if nums[indx+1] >= target: 
            return indx+1
          else:
            base = indx
            indx = math.floor((arr_len - (indx+1))/2) + indx + 1

  """
  36ms  13.9 MB
  It is possible to write through while loop and it might be faster than recurrsion method
  """      
  def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:

    if not l1 and not l2:
      return
    elif l1 and not l2:
      return l1
    elif l2 and not l1:
      return l2
    
    if l1.val <= l2.val:
      arr = ListNode(l1.val)
      arr.next = self.mergeTwoLists(l1.next,l2)
    else:
      arr = ListNode(l2.val)
      arr.next = self.mergeTwoLists(l1,l2.next)
    
    return arr

  # 76ms  14.0 MB
  def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
    if not l1 and not l2:
      return
    elif not l1:
      if l2.val == 10:
        l2.val = 0
        l1 = ListNode(1)
        ans = ListNode(0)
        ans.next = self.addTwoNumbers(l1, l2.next)
        return ans
      return l2
    elif not l2:
      if l1.val == 10:
        l1.val = 0
        l2 = ListNode(1)
        ans = ListNode(0)
        ans.next = self.addTwoNumbers(l2, l1.next)
        return ans
      return l1
    
    ans = ListNode(0)
    tmp = l1.val+l2.val
    if tmp < 10:
      ans.val += tmp
      ans.next = self.addTwoNumbers(l1.next, l2.next)
    else:
      ans.val += tmp%10
      if not l1.next and not l2.next:
        ans.next = ListNode(1)
      else:
        try:
          l1.next.val += 1
        except:
          l2.next.val += 1
        
        ans.next = self.addTwoNumbers(l1.next, l2.next)
      
    return ans

  """
  92 ms(92.71%)	15.4 MB(5.74%)
  O(N), O(1): the key in this question is not using del built-in function, since del is O(n)
  Adding del will increase approximately 60ms 
  """
  def removeDuplicates(self, nums: List[int]) -> int:
    if nums == []: return 0

    pos = 0
    for i in range(1,len(nums)):
      if nums[pos] < nums[i]:
        pos += 1
        nums[pos] = nums[i]

    nums = nums[0:pos+1]
    return pos+1 

  """
  32 ms(98.21%)	13.8 MB(6.06%)
  O(N), O(1): trying to avoid using `del` as well. It will improve the algorithm by about 10-12 ms  
  """
  def removeElement(self, nums: List[int], val: int) -> int:
    if nums == []: return 0
    
    pos = 0
    for i in range(0,len(nums)):
      if nums[i] != val:
        nums[pos] = nums[i]
        pos += 1

    nums = nums[0:pos+1]
    return pos 








