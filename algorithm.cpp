#include<bits/stdc++.h>
//#include<vector>
#include<algorithm>
//#include<numeric>  //for accumulate
//sorting using algo
using namespace std;
bool compare(int a,int b)
{
	return a>b;
}
void print(int x)
{
	cout<<x<<" ";
}
bool positive(int x)
{
     return x>0;
}
bool negative(int x)
{
	return x<0;
}
int main()
{
	vector<int>v{3,2,5,7,-7,9},v1(10);
//	for_each(v.begin(), v.end(), print);
//	cout<<endl;

	sort(v.begin(),v.end(), compare);

	for_each(v.begin(),v.end(),print);
	cout<<endl;


	////////////max_element for maximum element

	//cout<<*max_element(v.begin(),v.end())<<endl;
    //cout<<*min_element(v.begin(),v.end())<<endl;

    //////////accumulate gives sum of the array 
    //cout<<accumulate(v.begin(),v.end(),0)<<endl;

    //cout<<find(v.begin(),v.end(), 5)<<endl;

	reverse(v.begin(),v.end());

	for_each(v.begin(),v.end(),print);
	cout<<endl;

	if(binary_search(v.begin(),v.end(),0))
	    cout<<"exist";
    else
	    cout<<"doesn't exist";
	cout<<endl;

	auto itlb=lower_bound(v.begin(),v.end(),3);
	cout<<itlb-v.begin()<<" ";
	

	next_permutation(v.begin(),v.end());
	for_each(v.begin(),v.end(),print);
	cout<<endl;
   ///all_of-- tells if  positive
	if(all_of(v.begin(),v.end(), positive))
	{
		cout<<"all r positive\n";
	}
	else{
		cout<<"not positive\n";
	}

	//any_of--it is for negative
	if(none_of(v.begin(),v.end(), negative))
	{
		cout<<"no  neagtive\n";
	}
	else{
		cout<<"found neagtive\n";
	}

	//iota  
	iota(v1.begin(),v1.end(), 5);
	
	for_each(v1.begin(),v1.end(),print);
	cout<<endl;

    
     
}