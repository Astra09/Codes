t=int(input())
cases=0
while(t>0):
    cases+=1
    ov,n=map(int,input().split())
    ls=list(input())
    score=['DNB']*n
    score[0]=0
    score[1]=0
    curr=0
    opp=1
    upc=2
    cb=0
    out=[]
    for i in range(0,len(ls)):
        cb+=1
        if(ls[i]!='W'):
            ls[i]=int(ls[i])
            if(score[curr]=='DNB'):
                score[curr]=ls[i]
            else:
                score[curr]+=ls[i]
            if(ls[i]==1):
                temp=curr
                curr=opp
                opp=temp
        else:
            out.append(curr)
            curr=upc
            score[curr]=0
            upc+=1
        if(cb==6):
            cb=0
            temp=curr
            curr=opp
            opp=temp
    print("Case "+str(cases)+":")
    for i in range(0,len(score)):
        if i not in out and score[i]!='DNB':
            print("Player "+str(i+1)+": "+str(score[i])+"*")
        else:
            print("Player "+str(i+1)+": "+str(score[i]))
    t-=1
