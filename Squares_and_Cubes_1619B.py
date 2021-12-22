t = int(input())
while(t):
    n = int(input())
    soc = [1]
    for i in range(n):
        if i ** 2 <= n:
            soc.append(i ** 2)
        else:
            break
        if i ** 3 <= n:
            soc.append(i ** 3)
    soc= set(soc)
    print(len(soc) - 1)
    t -= 1
