#include<bits/stdc++.h>
#include<math.h>
using namespace std;

//bool isprime(int n)
//{
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0)
//		{
//			return false;
//		}}
//		return true;
//}
//int main()
//{
//int a,b;
//cin>>a>>b;
//for(int i=a;i<=b;i++)
//{
//	if(isprime(i)==true)
//	{
//		cout<<i<<endl;
//	}
//}
//}

//fibonacci
//void fib(int n)
//{
 // int t1=0,t2=1;
//  int nextterm;

 //for(int i=1;i<=n;i++)
// {    
//	cout<<t1<<endl;
//	nextterm=t1+t2;
  //  t1=t2;
    //t2=nextterm;
 //}
  //return;
//}
//int main()
//{
//	int n;
//	cin>>n;
//
//	fib(n);

//}

//factorial
//int fact(int n)
//{
//	int fact=1;
//	for(int i=2;i<=n;i++)
//	{
//		fact=fact*i;
//	}
//	return fact;

//}
//int main()
//{
//	int n;
//	cin>>n;
//	int ans = fact(n);
//	cout<<ans<<endl;
//	return 0;
//}


//calcute nCr
//int fact(int
//{
//	int fact=1;
//	for(int i=2;i<=n;i++)
//	{
//		fact=fact*i;
//	}
//	return fact;

//int main()
//{
	//int n,r;
	//cin>>n>>r;
	//int ans=fact(n)/(fact(r)*fact(n-r));
//	cout<<ans<<endl;
//}


//pascal triangle
int fact(int n)
{
  int fact=1;
  for(int i=2;i<=n;i++)
  {
    fact=fact*i;
 }
 return fact;
}
int main()
{
  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    }
    cout<<endl;
  }
}

