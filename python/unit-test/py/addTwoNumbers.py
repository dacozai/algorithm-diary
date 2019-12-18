import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.py_sol import Solution

class ListNode:
  def __init__(self, x):
    self.val = x
    self.next = None

sol = Solution()
a = ListNode(1)
b = ListNode(9)
b.next = ListNode(9)
ans = ListNode(0)
ans.next = ListNode(0)
ans.next.next = ListNode(1)

x = sol.addTwoNumbers(a, b)
assert(x.val == 0)
assert(x.next.val == 0)
assert(x.next.next.val == 1)
assert(not x.next.next.next)

a = ListNode(8)
a.next = ListNode(9)
a.next.next = ListNode(9)
b = ListNode(2)
ans = ListNode(0)
ans.next = ListNode(0)
ans.next.next = ListNode(0)
ans.next.next.next = ListNode(1)

x = sol.addTwoNumbers(a, b)
assert(x.val == 0)
assert(x.next.val == 0)
assert(x.next.next.val == 0)
assert(x.next.next.next.val == 1)
assert(not x.next.next.next.next)




print("All Pass")