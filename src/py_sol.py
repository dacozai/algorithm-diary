from typing import Set, Dict, Tuple, Sequence, List, Any

class Solution:
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

  def reverse(self, x: int) -> int:
    if x > 0:   
      num =  int(str(x)[::-1])  
    else:    
      num = -1 * int(str(x*-1)[::-1])  

    if num > 2**31 - 1 or num < 2**31 * -1: return 0
    return num
  
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

  def isPalindrome(self, x: int) -> bool:
    x = str(x)
    return x == "".join(list(reversed(x)))

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







