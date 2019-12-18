import sys
sys.path.append('../..')
from typing import Set, Dict, Tuple, Sequence, List, Any
from array import *

class pickQuestionForTest:
  
  def __init__(self, number):
    self.obj = None
    if number is 1:
      self.obj = twoSumTest()
    elif number is 15:
      self.obj = threeSumTest()
    elif number is 53:
      self.obj = maxSubArrayTest()


TEST = pickQuestionForTest(1)
TEST.obj.runTest() 



print("Pass Test")