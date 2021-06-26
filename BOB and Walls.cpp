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
		vector <long long int> v;
		for(long long int i=0;i<n;i++)
		{
			long long int d;
			cin>>d;
			v.push_back(d);
		}
		long long int cc=1,cur=v[0];
	for(long long int i=1;i<n;i++)
	{
		if(v[i]>=cur)
		{
			cc+=1;
			cur=v[i];
		}
	}
	cout<<cc<<endl;
	}	
}
