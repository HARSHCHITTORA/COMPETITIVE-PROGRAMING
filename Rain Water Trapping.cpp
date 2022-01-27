#include <bits/stdc++.h>
using namespace std;
int rain_water_trapping(int arr[],int n)
{
	int maxl[n];
	int maxr[n];
	int sum=0;
	int water[n];
	maxl[0]=arr[0];
	maxr[n-1]=arr[n-1];
	for(int i=1;i<n;i++)
	{
	    maxl[i]=max(maxl[i-1],arr[i]);
	}
	for(int i=n-2;i>=0;i--)
	{
	    maxr[i]=max(maxr[i+1],arr[i]);
	}
	for(int i=0;i<n;i++)
	{
	    water[i]=min(maxl[i],maxr[i])-arr[i];
	}
	for(int i=0;i<n;i++)
	{
	    sum=sum+water[i];
	}
	return sum;
    
}
int main()
{
	int n;
	cout<<"enter number of buildings"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Height of each building"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int area=rain_water_trapping(arr,n);
    cout<<"Area of water trapping"<<endl;
    cout<<area<<endl;
}
