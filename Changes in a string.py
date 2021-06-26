t=int(input())
while(t>0):
    n=int(input())
    s=input()
    firstb=-1
    lasta=-1
    for i in range(0,len(s)):
        if(s[i]=='B'):
            firstb=i
            break
    ss=s[::-1]
    for i in (range(0,len(ss))):
        if(ss[i]=='A'):
            lasta=n-i-1
            break
    if(lasta>firstb and firstb!=-1 and lasta!=-1):
        tmpa=s[:lasta+1]
        cb=tmpa.count('B')
        tmpb=s[firstb:]
        ca=tmpb.count('A')
        cal=len(tmpa)
        cbl=len(tmpb)
        if(cal<cb):
            sum=cal+ca
        elif(cal>cb):
            sum=cb
            if(cbl<ca):
                sum+=cbl
            else:
                sum+=ca
        print(sum)
    else:
        print(0)
    t-=1
