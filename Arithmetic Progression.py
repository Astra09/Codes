import math
t=int(input())
while(t>0):
    a,b,c=map(int,input().split())
    if(b-a)!=(c-b):
        tmp=math.ceil(abs((b-((c+a)/2))))
        print(tmp)
    else:
        print(0)
    t-=1
