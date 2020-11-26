t = int(input())
for y in range(t):
    n = int(input())
    x = [0] * n
    x[0] = 1
    x[1] = 2
    total = 2
    for i in range(2,n):
        x[i] = x[i-1] + x[i-2]
        if x[i] >= n:
            break
        if x[i] % 2 ==0:
            total += x[i]
    print(total)
