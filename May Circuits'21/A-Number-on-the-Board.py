
from math import log

a,b,c = map(str, input().split())
a,b,c = float(a), int(b), int(c)

if(a<=1 and a>=0):
    ans = log(1+b*c, 2)
elif(a>b):
    ans = c*log(a,2)
elif(b>a):
    n=(1+b-a)/(b*(a-1))
    n = int(n) + 1
    ans = log(1+n*b, 2) + (c-n)*log(a,2)

print('%.8f'%ans)