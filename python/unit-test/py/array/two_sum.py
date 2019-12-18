import sys
sys.path.append('../..')
from src.array._1_twoSum import * 

class twoSumTest:
  def runTest(self):
    """
    Testing cases
    """
    print("Test TwoSum algorithm")
    example_nums = [2,11,7,15]
    target = 9
    assert([0,2] == twoSum(example_nums, target))

