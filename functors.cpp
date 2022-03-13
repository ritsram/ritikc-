#include<bits/stdc++.h>

using namespace std;

class add{   //creating class
	   
public:
  int operator()(int m,int n){   //function overloading
       return m+n;}
};
int main()
{
	vector<int> v{1,2,3,4,5},v1{5,4,3,2,1};
   //second v.begin()==where the value will store after incrementing
	transform(v.begin(),v.end(),v1.begin(),v.begin(),add());
	for(auto it=v.begin();it!=v.end();it++)
	{
         cout<<*it<<" ";
	}
	cout<<endl;
}