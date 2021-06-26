#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,res="";
		cin>>s;
		int ch[26];
		for(int i=0;i<26;i++)
		{
			ch[i]=13;
		}
		for(int i=0;i<s.length();i++)
		{
			int ind=s[i]-97;
			char cc=((ind+ch[ind])%26)+97;
			ch[ind]+=1;
			res+=cc;
		}
		cout<<res<<endl;
	}
}
