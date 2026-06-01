def solve(n):
    if n % 2 == 0:  # n é par
        a = 2
        b = n - 3
        c = 1
    else:  # n é ímpar
        k = (n - 1) // 2
        if k % 2 == 0:  # k é par, implica n = 4m + 1 (ex., n=13 -> k=6)
            a = k - 1
            b = k + 1
            c = 1
        else:  # k é ímpar, implica n = 4m + 3 (ex., n=11 -> k=5)
            a = k - 2
            b = k + 2
            c = 1
    return a, b, c

t = int(input())
for _ in range(t):
    n = int(input())
    a, b, c = solve(n)
    print(a, b, c)