def containsNearbyAlmostDuplicate(nums, k, t):
    pp = set()
    vv = set()
    sz = len(nums)
    for i in range(sz):
        st = i+k if i+k<sz else sz-1
        ed = i-k if i+k>=0 else 0
        for j in range(st, ed, -1):
            pos, val = frozenset((i,j)), frozenset((nums[i], nums[j]))
            if val in vv:
                continue
            if i==j or pos in pp:
                break
            if abs(nums[i] - nums[j]) <= t:
                return True
            pp.add(pos)
            vv.add(val)
    return False
