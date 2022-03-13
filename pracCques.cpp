//////////////////////////////insurance company

//#include<bits/stdc++.h>
//using namespace std;

//int main()
//{
//char h,g,l;
//int age;
//cout<<"enter e for good and p for poor"<<endl;
//cin>>h;
//cout<<"enter f for female and m for male"<<endl;
//cin>>g;
//cout<<"enter c for city and v for village"<<endl;
//cin>>l;
//cout<<"enter age"<<endl;
//cin>>age;
//if((h=='e')&&(g=='m')&&((age>=25)||(age<=35)))
//{
//	cout<<"premium is 4 per thousand till 2 lakh"<<endl;
//}
//else if((h=='e')&&(g=='f')&&((age>=25)||(age<=35)))
//	{
//		cout<<"premium is 3 per thousand till 1 lakh";
//	}
//	else if((h=='p')&&(g=='m')&&((age>=25)||(age<=35)))
//	{
  //      cout<<"premium is 6 per thousand till 10 thousand";
//	}
//	else
//	{
//		cout<<"no insurance";
//	}
//}




///////////////////////////////parking charges
//#include<bits/stdc++.h>
//using namespace std;

//int main()
//{///
//	char v;
//	int m;
//	cout<<"enter vehicle v"<<endl;
//	cin>>v;
//	cout<<"enter minutes "<<endl;
//	cin>>m;
//	if((v=='t')||(v=='b'))
//	{
//		if(m<=180)
//		cout<<"take 20 rupees"<<endl;
//	    else
//		cout<<"take "<<20+30<<" rupees"<<endl;	
//	}
//	else if((v=='a')||(v=='m')||(v=='s'))
//	{
//		if(m<=180)
//			cout<<"take 5 rupees"<<endl;
//		else
//			cout<<"take "<<5+10<<" rupees"<<endl;
  //  }
//	else if(v=='c')
//	{
//		if((m<=180))
//			cout<<"take 10 rupees"<<endl;			
//		else
//		    cout<<"take "<<10+20<<" rupees"<<endl;
//	}
//	return 0;

//}


///left arrow pattern
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<"1";
		}
		for(k=0;k<=n-i;k++)
		{
            cout<<"*";
		}
		cout<<endl;
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<i+1;j++)
		{
			cout<<"1";
		}
		for(k=0;k<i+1;k++)
		{
            cout<<"*";
           
		}
		cout<<endl;
}

	return 0;
}

