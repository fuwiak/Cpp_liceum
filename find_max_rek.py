def find_max(li, left, right):
    if left == right:
        return li[left]
    mid = (left + right) / 2
    max1 = find_max(li, left, mid)
    max2 = find_max(li, mid+1, right)
    return max1 if max1 > max2 else max2
