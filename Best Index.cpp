#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector <long long int > v;
	for(long long int i=0;i<n;i++)
	{
		long long int d;
		cin>>d;
		v.push_back(d);
	}
	long long int max=0;
	for(long long int i=0;i<n;i++)
	{
		long long int sums=0;
		for(long long int j=i;j<n;j++)
		{
			sums=sums+v[j];
			if(sums>max)
			{
				max=sums;
			}
		}
	}
	cout<<max;
}
