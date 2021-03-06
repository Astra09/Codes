#include <cstdio>
using namespace std;

bool onlySumsBelow(long S, long q[], long N, long M){
    long partitionsUsed=1;
    long currentSum = 0;
    for(long i=0; i<N; i++){
        if(q[i] > S) return false;
        if(currentSum+q[i] > S){
            currentSum = q[i];
            partitionsUsed++;
        }
        else{
            currentSum+=q[i];
        }
    }
    return partitionsUsed <= M;
}

int main(void){
    long N,M;
    scanf("%ld %ld", &N,&M);
    long* q;
    q = new long [N];
    long maxm=0;
    for(long i=0; i<N; i++){
        scanf("%ld", &q[i]);
        if(maxm < q[i])
            maxm = q[i];
    }
    int S= maxm;
    long long maxsum=0;
    for(long i=0; i<N; i++)
        maxsum+=q[i];

    long l=0,mid;
    long r= maxsum;
    while(l<=r){
        mid=(l+r)/2;
    if(onlySumsBelow(mid, q , N , M)== true)
        r=mid-1;
    else
        l=mid+1;
    }
    printf("%ld",l);
    return 0;
}
