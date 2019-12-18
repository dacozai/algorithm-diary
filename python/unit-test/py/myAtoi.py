import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from src.py_sol import Solution

sol = Solution()
input_str = "42"
assert(42 == sol.myAtoi(input_str))
input_str = "   -42"
assert(-42 == sol.myAtoi(input_str))
input_str = "4193 with words"
assert(4193 == sol.myAtoi(input_str))
input_str = "-91283472332"
assert(-2147483648 == sol.myAtoi(input_str))
input_str = "91283472332"
assert(2147483647 == sol.myAtoi(input_str))
input_str = "3.14159"
assert(3 == sol.myAtoi(input_str))
input_str = "3........14159"
assert(3 == sol.myAtoi(input_str))
input_str = ".1"
assert(0 == sol.myAtoi(input_str))
input_str = ""
assert(0 == sol.myAtoi(input_str))
input_str = "1"
assert(1 == sol.myAtoi(input_str))
input_str = "+"
assert(0 == sol.myAtoi(input_str))
input_str = "+1"
assert(1 == sol.myAtoi(input_str))
input_str = "00000000000000000123456"
assert(123456 == sol.myAtoi(input_str))
input_str = "-0000000000000000000001"
assert(-1 == sol.myAtoi(input_str))
input_str = "    +11191657170"
assert(2147483647 == sol.myAtoi(input_str))

print("All Pass")