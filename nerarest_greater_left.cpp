#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> v;
	int n,key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>key;
		v.push_back(key);
    }
    vector<int>q;
    stack<int> s;

    for(int j=0;j<n;j++)
    {
    	if(q.size()==0)
    		q.push_back(-1);

    	else if(s.size()>0 && s.top()>v[j])
    		q.push_back(s.top());

    	else if(s.size()>0 && s.top()<=v[j])
    	{
    		while(s.size()>0 && s.top()<=v[j])
    		{
    			s.pop();
    		}
    		if(s.size()==0)
    			q.push_back(-1);
            
            else
            	q.push_back(s.top());
    	}
    	s.push(v[j]);

    }
    for(int i=0;i<v.size();i++)
    {
    	cout<<q[i]<<" ";
    }
}