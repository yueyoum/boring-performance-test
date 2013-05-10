def fac(n):
    if n == 0:
        return 1
    res = 1
    while n > 0:
        res *= n
        n -= 1
    return res

for i in range(1000000):
    fac(10)

