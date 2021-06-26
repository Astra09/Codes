t=int(input())
while(t>0):
    s=input()
    n=len(s)
    cc=0
    for i in range(0,len(s)):
        if(s[i]=='W'):
            if(i==0):
                if(s[i+1]=='B' or s[i+2]=='B'):
                    cc+=1
            elif(i==1):
                if(s[i+1]=='B' or s[i+2]=='B' or s[i-1]=='B'):
                    cc+=1
            elif(i==n-2):
                if(s[i-1]=='B' or s[i-2]=='B' or s[i+1]=='B'):
                    cc+=1
            elif(i==n-1):
                if(s[i-1]=='B' or s[i-2]=='B'):
                    cc+=1
            else:
                if(s[i-1]=='B' or s[i-2]=='B' or s[i+1]=='B' or s[i+2]=='B'):
                    cc+=1
    print(cc)
                
    t-=1
