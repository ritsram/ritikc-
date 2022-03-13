#include<bits/stdc++.h>
using namespace std;



//hollow cylindre
//{
	//int r,c;
//	cin>>r>>c;
//	for(int i=0;i<=r;i++){
//		for(int j=0;j<=c;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}

//int main()
//{
//	int r,c;
//	cin>>r>>c;
//
//	for(int i=1;i<=r;i++)
//	{
//		for(int j=1;j<=c;j++)
//		{
//			if(i==1 || i==r || j==1 || j==c)
//			{
//				cout<<"*";
//			}
//			else{
//				cout<<" ";
//			}
//	    } cout<<endl;
 //   }
//}


//half piramid
//int main()
//{
//	int n;
//	cin>>n;
//
//	for(int i=n;i>=1;i--)
//	{
//		for(int j=1;j<=i;j++)
//
//		{
//			cout<<"*";
//		}cout<<endl;
  //  }

//}


//hlf pyramid ulta
//int main()
//{
  //  int n;
    //cin>>n;

//    for(int i=1;i<=n;i++)
  //  {
    //    for(int j=1;j<=n;j++)
    //	{
    //		if(j<=n-i)
    //		{
    //			cout<<" ";
//
  //  		}else{
    //			cout<<"*";
    //	   }
    //	}
    //		cout<<endl;
    //}   
//}

//halg pyramid using no.
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<i;
//		}cout<<endl;
//	}
//}

//floyds triangle
//int main()
//{
//	int n;
//	cin>>n;
//	int count=1;
//	for(int i=1;i<=n;i++)
//	{
///		for(int j=0;j<=i;j++)
	//	{
     //       cout<<count<<" ";
      //      count++;
	//	}cout<<endl;
	//}

//}


//butterfly
int main()
{

	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		int space = 2*n - 2*i;
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		int space = 2*n - 2*i;
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

