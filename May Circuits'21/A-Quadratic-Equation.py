def calc1(a,d,x):
    n = (x-a)/d +1
    if n.is_integer(): 
        return int(n)
    else:
        return int(n+1)

def calc2(a,d,x):
    n = (x-a)/d + 1
    return int(n)

T = int(input())

for test in range(T):
    L,R = map(int, input().split())

    count = 0
    for i in range(1, int(pow(R,1/2))+1):
        a = i*i
        p1 = 0
        p2 = 0

        if(L >= a):
            p1 = calc1(a, 2*i, L)
        
        if(R >= a):
            p2 = calc2(a, 2*i, R)
        
        else:
            break
        count = count + (p2-p1)
        if (p1 != 0):
            count = count + 1

    print(count)
