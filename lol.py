from math import gcd


def phi(n):
    amount = 0
    for k in range(1, n + 1):
        if gcd(n, k) == 1:
            amount += 1
    return amount


choose_1 = float(50/53)
choose_2 = float(40/43)
choose_3 = float(20/23)
choose_4 = float(10/13)
list = []

for i in range(1, 10000):
    if phi(i) == 160:
        list.append(i)

print(list)
