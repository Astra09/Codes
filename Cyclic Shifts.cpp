#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,x;
		char ch;
		cin>>n>>x>>ch;
		bitset <16> nn(n);
		if(ch=='L')
		{
			cout<<(nn<<x | nn>>16-x).to_ulong()<<endl;
		}
		else
		{
			cout<<(nn>>x | nn<<16-x).to_ulong()<<endl;
		}
	}
}
