n=int(input())
arr=[0]*31
while(n>0):
    s=list(input().split(" "))
    for i in range(0,len(s)):
        if(s[i].isnumeric()):
            ind=int(s[i])
            if(s[0]=="G:"):
                arr[ind]+=2
            else:
                arr[ind]+=1
    n=n-1
maxs=max(arr)
res=[]
for i in range(1,31):
    if(arr[i]==maxs):
        res.append(i)
if(len(res)==1):
    if 19 in res or 20 in res:
        print("Date")
    else:
        print("No Date")
else:
    print("No Date")
