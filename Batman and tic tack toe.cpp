#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char arr[4][4];
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				cin>>arr[i][j];
			}
		}
		int flag=0;
		//row wise
		for(int i=0;i<4;i++)
		{
			if((arr[i][0]=='x' and arr[i][1]=='x' and arr[i][2]=='.')  or (arr[i][0]=='x' and arr[i][1]=='.' and arr[i][2]=='x') or (arr[i][0]=='.' and arr[i][1]=='x' and arr[i][2]=='x'))
			{
				flag=1;
				break;
			}
			else if((arr[i][1]=='x' and arr[i][2]=='x' and arr[i][3]=='.') or (arr[i][1]=='x' and arr[i][2]=='.' and arr[i][3]=='x') or (arr[i][1]=='.' and arr[i][2]=='x' and arr[i][3]=='x') )
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			for(int j=0;j<4;j++)
		{
			if((arr[0][j]=='x' and arr[1][j]=='x' and arr[2][j]=='.') or (arr[0][j]=='x' and arr[1][j]=='.' and arr[2][j]=='x') or (arr[0][j]=='.' and arr[1][j]=='x' and arr[2][j]=='x'))
			{
				flag=1;
				break;
			}
			else if((arr[1][j]=='x' and arr[2][j]=='x' and arr[3][j]=='.') or (arr[1][j]=='x' and arr[2][j]=='.' and arr[3][j]=='x') or (arr[1][j]=='.' and arr[2][j]=='x' and arr[3][j]=='x'))
			{
				flag=1;
				break;
			}
		}
		}
		if(flag==0)
		{
			if((arr[0][0]=='x' and arr[1][1]=='x' and arr[2][2]=='.') or (arr[0][0]=='x' and arr[1][1]=='.' and arr[2][2]=='x') or (arr[0][0]=='.' and arr[1][1]=='x' and arr[2][2]=='x'))
			{
				flag=1;
				break;
			}
			else if((arr[1][1]=='x' and arr[2][2]=='x' and arr[3][3]=='.') or (arr[1][1]=='x' and arr[2][2]=='.' and arr[3][3]=='x') or (arr[1][1]=='.' and arr[2][2]=='x' and arr[3][3]=='x'))
			{
				flag=1;
				break;
			}
			else if((arr[0][3]=='x' and arr[1][2]=='x' and arr[2][1]=='.') or (arr[0][3]=='x' and arr[1][2]=='.' and arr[2][1]=='x') or (arr[0][3]=='.' and arr[1][2]=='x' and arr[2][1]=='x'))
			{
				flag=1;
				break;
			}
			else if((arr[1][2]=='x' and arr[2][1]=='x' and arr[3][0]=='.') or (arr[1][2]=='x' and arr[2][1]=='.' and arr[3][0]=='x') or (arr[1][2]=='.' and arr[2][1]=='x' and arr[3][0]=='x'))
			{
				flag=1;
				break;
			}
			else if((arr[0][1]=='x' and arr[1][2]=='x' and arr[2][3]=='.') or (arr[0][1]=='x' and arr[1][2]=='.' and arr[2][3]=='x') or (arr[0][1]=='.' and arr[1][2]=='x' and arr[2][3]=='x'))
			{
				flag=1;
				break;
			}
			else if((arr[1][0]=='x' and arr[2][1]=='x' and arr[3][2]=='.') or (arr[1][0]=='x' and arr[2][1]=='.' and arr[3][2]=='x') or (arr[1][0]=='.' and arr[2][1]=='x' and arr[3][2]=='x'))
			{
				flag=1;
				break;
			}
			else  if((arr[0][2]=='x' and arr[1][1]=='x' and arr[2][0]=='.') or (arr[0][2]=='x' and arr[1][1]=='.' and arr[2][0]=='x') or (arr[0][2]=='.' and arr[1][1]=='x' and arr[2][0]=='x'))
			{
				flag=1;
				break;
			}
			else   if((arr[1][3]=='x' and arr[2][2]=='x' and arr[3][1]=='.') or (arr[1][3]=='x' and arr[2][2]=='.' and arr[3][1]=='x') or (arr[1][3]=='.' and arr[2][2]=='x' and arr[3][1]=='x'))
			{
				flag=1;
				break;
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
