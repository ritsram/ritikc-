#include<bits/stdc++.h>
#include<math.h>
using namespace std;
//int main()
//{
//	int n;
	//cin>>n;
  //  bool flag=0;
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)   
//		{
//			cout<<"non-prime"<<endl;
//			flag=1;
//			 break;
//		}
//	}
//	if(flag==0){
//		cout<<"prime"<<endl;
//	}
//}

//armstrong
int main()
{
	int n;
	cin>>n;

	int originaln,sum=0;
	originaln=n;

	while(n>0)
	{  int ld=n%10;
		sum+=pow(ld,3);
		n=n/10;
	}
	if(originaln==sum)
	{
		cout<<"armstrong"<<endl;

	}else{
		cout<<"not armstrong"<<endl;
	}
}