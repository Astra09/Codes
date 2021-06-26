t=int(input())
while(t>0):
    a=(input())
    b=(input())
    flag1=0
    flag2=0
    for i in range(97,97+26):
        if(a.count(chr(i))>b.count(chr(i))):
            flag1=1
        elif(a.count(chr(i))<b.count(chr(i))):
            flag2=1
        if(flag1==1 and flag2==1):
            break
    if(flag1==1 and flag2==0):
        print("You win some.")
    elif(flag1==0 and flag2==1):
        print("You lose some.")
    else:
        print("You draw some.")
    t-=1
