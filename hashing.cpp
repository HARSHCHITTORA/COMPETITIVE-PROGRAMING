//FINDING ELEMENT IN AN ARRAY WITH TIME COMPLEXITY O(1)

#include<iostream>
#include<math.h>
using namespace std;
#define max 1000

bool hashing[max+1][2];
bool find(int key)
{
	if(key>=0)
	{
		if(hashing[key][0]==1)
			return true;
		else
		{
			return false;
		}
	}
	else
	{   key=abs(key);
		if(hashing[key][1]==1)
			return true;
		else
			return false;
	}
}
void insert(int a[],int n)
{  for(int i=0;i<n;i++)
{


	if(a[i]>=0)
	{
		hashing[a[i]][0]=1;
	}
	else
	{
		hashing[abs(a[i])][1]=1;
	}
}
}
int main()
{
	int n;
	cout<<"Enter number of element present in an array"<<endl;
	cin>>n;
	cout<<"Enter elements in an array"<<endl;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter lement you want to find in an array"<<endl;
	int key;
	cin>>key;
	insert(a,n);

	if(	find(key))
	{
		cout<<"element is present"<<endl;
	}
	else
	{
		cout<<"element not present"<<endl;
	}
	
	
}

