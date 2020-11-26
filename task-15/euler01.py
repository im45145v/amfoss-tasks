t = int(input())


def sum2(z):
    total = 0
    for i in range(len(z)):
        total += z[i]
    print(int(total))


for y in range(t):
    n = (input())
    a = []
    for i in range(1, n):
        if i != n:
            if i % 3 == 0:
                a.append(i)
            elif i % 5 == 0:
                a.append(i)
    sum2(a)
