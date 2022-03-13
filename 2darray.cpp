#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m ,n;
	cin>>n>>m;
	int a[m][n];

	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cin>>a[m][n];
		}
	}
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<a[m][n];
		}
		cout<<endl;
	}
}