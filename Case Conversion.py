t=int(input())
while(t>0):
    s=input()
    res=s[0]
    for i in range(1,len(s)):
        if((s[i]>='A' and s[i]<='Z')):
            res=res+'_'+s[i]
        else:
            res+=s[i]
    print(res.lower())      
    t-=1
