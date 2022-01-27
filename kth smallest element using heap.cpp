#include <bits/stdc++.h>
using namespace std;
int smallest_element(int arr[],int n,int k)
{
	priority_queue<int>max_heap;
	for(int i=0;i<n;i++)
	{
		max_heap.push(arr[i]);
		if(max_heap.size()>k)
		{
			max_heap.pop();
		}
	}
	return max_heap.top();
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
	cout<<"enter the kth smallest element you want to find"<<endl;
	cin>>k;
	int small=smallest_element(arr,n,k);
    cout<<"kth smallest element is"<<endl;
    cout<<small<<endl;
}
