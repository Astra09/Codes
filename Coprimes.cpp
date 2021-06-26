#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n-2;i>0;i--)
	{
		if(__gcd(n,i)==1)
		{
			cout<<i;
			break;
		}
	}
}
