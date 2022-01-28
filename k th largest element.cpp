#include <bits/stdc++.h>
using namespace std;
vector<int> largest_element(int arr[],int n,int k)
{   vector<int>x;
	priority_queue <int, vector<int>, greater<int> > min_heap;
	
	for(int i=0;i<n;i++)
	{	min_heap.push(arr[i]);
		if(min_heap.size()>k)
		{
			min_heap.pop();
		}
		if(min_heap.size()>=k)
		{
			x.push_back(min_heap.top());
		}
		else if(min_heap.size()<=k)
		{
			x.push_back(-1);
		}
	}
  	return x;
}
int main()
{
	int n,k;
	cout<<"enter of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the kth largest  element you want to find"<<endl;
	cin>>k;
   	vector<int>small=largest_element(arr,n,k);
    cout<<"kth largest element is"<<endl;
    for(int i=0;i<small.size();i++)
    {
    	std::cout << small.at(i) << ' ';
	}
}
