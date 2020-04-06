def hasPathWithGivenSum(t, s):
    def dfs(node, s, n):
        if node is None:
            return True if n == s else False
        return dfs(node.left, s, n+node.value) or dfs(node.right, s, n+node.value)
    if t is None:
        return False
    elif t.left is None:
        return dfs(t.right, s,t.value)
    elif t.right is None:
        return dfs(t.left, s,t.value)
    return dfs(t.left, s, t.value) or dfs(t.right, s,t.value)
