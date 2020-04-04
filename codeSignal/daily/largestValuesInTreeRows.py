#
# Binary trees are already defined with this interface:
# class Tree(object):
#   def __init__(self, x):
#     self.value = x
#     self.left = None
#     self.right = None
ans = []
def largestValuesInTreeRows(t):
    if t is None:
        return ans
    ans.append(t.value)
    dfs(t.left, 1)
    dfs(t.right, 1)
    return ans
def dfs(node, level):
    if node is not None:
        if level < len(ans):
            ans[level] = max(ans[level], node.value) 
        else:
            ans.append(node.value)
        dfs(node.left, level+1)
        dfs(node.right, level+1)
