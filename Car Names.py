t=int(input())
while(t>0):
    s=list(input())
    ss=list(set(s))
    if(len(ss)==3):
        l=len(s)//3
        t1=s[:l]
        t2=s[l:l+l]
        t3=s[l+l:]
        t1=list(set(t1))
        t2=list(set(t2))
        t3=list(set(t3))
        if(len(t1)==1 and len(t2)==1 and len(t3)==1):
            print("OK")
        else:
            print("Not OK")
            

    else:
        print("Not OK")
    t-=1
