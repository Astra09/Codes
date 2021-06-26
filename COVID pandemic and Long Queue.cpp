#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		vector <int> v;
		for(long long int i=0;i<n;i++)
		{
			long long int d;
			cin>>d;
			v.push_back(d);
		}
		int flag=1;
		long long int start;
		for(long long int i=0;i<v.size();i++)
		{
			if(v[i]==1)
			{
				start=i;
				break;
			}
		}
		for(long long int i=start+1;i<v.size();i++)
		{
			if(v[i]==1)
			{
				if(((i)-start)>=6)
				{
					start=i;
				}
				else
				{
					flag=0;
					break;
				}
			}
		}
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
