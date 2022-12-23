def count(l):
    max = 0
    res = l[0]
    for i in l:
        freq = l.count(i)
        if freq > max:
            max = freq
            res = i
    return max
print(count([63,4756,347,3,47,4,684,5,347]))