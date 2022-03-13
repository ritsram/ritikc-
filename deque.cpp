//doubly ended queue 
//both end insert and delete
//faster then vector in insertion and deletion
//anywhere node and memory

#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{
	int n;
	cin>>n;
	deque<int> dq;
	for(int i=0;i<n;i++)
	{
		int key;
		cin>>key;
		dq.push_front(key);
	}
    
     cout<<dq.front()<<"  "<<dq.back();
     cout<<endl;
     dq.clear();   
	for(auto it=dq.begin();it!=dq.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

}