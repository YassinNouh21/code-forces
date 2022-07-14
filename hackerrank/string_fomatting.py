def print_formatted(n):
    for n in range(n+1):
        if n == 0:
            continue
        for i in range(4):
            if i == 0:
                print('{a}  {b}  {c}  {d}'.format(
                    a=n, b=oct(n)[2:], c=hex(n)[2:], d=bin(n)[2:]))


if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
