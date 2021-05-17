n, a, x = map(int, input().split())

b = n-a

if(x>(a*b)):
    print(-1)
else:
    p = int(x/b)
    q = int(x%b)

    list = [0]*(n-p-b-1) + [1]*(q) + [0] + [1]*(b-q) + [0]*p

    for i in range(n):
        print(list[i], end=" ")

        