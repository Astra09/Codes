#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
	if(n<0)
	{
		return 0;
	}
	if(n==0)
	{
		return 1;
	}
	return rec(n-1)+rec(n-2)+rec(n-3);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int val;
		cin>>val;
		cout<<rec(val);
	}
}
