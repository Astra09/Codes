#include<iostream>
using namespace std;
int main()
{
	long long int t,r,s,p,i,sum,res;
	cin>>t;
	while(t--)
	{
		sum=0;
		res=-1;
		cin>>r>>s>>p;
		long long int num=1;
		for(i=1;i<p;i++)
		{
			sum=sum+num;
			num=num*r;
			if(sum%p==s)
			{
				res=i;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
