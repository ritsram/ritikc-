//linear search
#include<bits/stdc++.h>
using namespace std;

//int main()
//{
//	int n;
//	cin>>n;
    
  //  int a[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//          if(a[j]<a[i])
//          {
//              int temp=a[j];
//              a[j]=a[i];
  //            a[i]=temp;
//
  //        }
//
//		}
//	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//}

//chocolate 
int main()
{
	int n;
	cin>>n;
    int sum=n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum++;
		}
	}cout<<sum+1<<" ";
}

