#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,i,j,k=0;
		cin>>m>>n;
		string att[100],val[500];
		for(i=1;i<=m;i++)
		{
			cin>>att[i];
		}
			for(j=1;j<=m*n;j++)
			{
				cin>>val[i];
			}
		cout<<"+-------------+------------+--------+------------+--------+"<<endl;
		for(i=1;i<=m;i++)
		{
			cout<<"| "<<att[i]<<"        ";
		}
		cout<<endl;
		cout<<"+-------------+------------+--------+------------+--------+"<<endl;
		for(j=1;j<=m*n;j++)
		{
			cout<<"| "<<val[j]<<" ";
			k++;
			if(k==m)
			{
				cout<<endl;
				k=0;
			}
		}
		
		cout<<"+-------------+------------+--------+------------+--------+"<<endl;
	}
}
