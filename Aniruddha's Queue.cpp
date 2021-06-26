#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,sum,m,last;
		vector <long long int >v;
		cin>>n;
		for(long long int i=0;i<n;i++)
		{	
			long long int d;
			cin>>d;
			v.push_back(d);
			if(d>0)
			{
				last=i+1;
			}
		}
		cin>>m;
		sum=accumulate(v.begin(),v.end(),0);
		m=m%sum;
		if(m==0)
		{
			cout<<last<<endl;
		}
		else
		{
			for(long long int i=0;i<n;i++)
			{
				m=m-v[i];
				if(m<=0)
				{
					cout<<i+1<<endl;
					break;
				}
			}
		}
		
	}
}
