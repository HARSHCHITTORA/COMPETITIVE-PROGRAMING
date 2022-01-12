#include <bits/stdc++.h>
using namespace std;
void insert_(vector<int>&v,int temp)
{
	if(v.size()==0 || v[v.size()-1]<=temp)
	{
		v.push_back(temp);
		return;
	}
	int val=v[v.size()-1];
	v.pop_back();
	insert_(v,temp);
	v.push_back(val);
	return;
}
void sort_(vector<int>&v)
{
	if(v.size()==1)
	{
		return;
	}
	int temp=v[v.size()-1];
	v.pop_back();
	sort_(v);
	insert_(v,temp);
}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
 std::vector<int>v(arr, arr + n);
	sort_(v);
 for(int i=0; i < v.size(); i++)
std::cout << v.at(i) << ' ';
}
