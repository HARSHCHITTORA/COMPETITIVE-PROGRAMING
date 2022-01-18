#include<bits/stdc++.h>
using namespace std;
vector<long long>nge(vector<long long> a,int n)
{  vector<long long>v;
stack<long long>s;
   for(int i=0;i<n;i++)
   {
   
	if(s.size()==0)
	{
       v.push_back(-1);		
	}
	else if(s.size()>0 && s.top()<a[i])
	{
		v.push_back(s.top());
	}
	else if(s.size()>0 && s.top()>=a[i])
	{
		while(s.size()>0 && s.top()>=a[i])
		{
			s.pop();
		}
		if(s.size()==0)
		{
			v.push_back(-1);
		}
		else
		{
			v.push_back(s.top());
		}
	}
	s.push(a[i]);
}
return v;
}
int main()
{
	int n;
	cout<<"enter number of element"<<endl;
	cin>>n;
	vector<long long>a(n);
	cout<<"enter element in an array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<long long> res=nge(a,n);
	cout<<"next smaller element to left"<<endl;
	for(int i=0; i < res.size(); i++)
std::cout << res.at(i) << ' ';
}
