#include<iostream>
using namespace std;
void print(int n)
{
	if(n)
	{
		print(n-1);
	}
	else
	{
		return;
	}
	cout<<n<<" ";
   
}
int main()
{
	int n;
	cin>>n;
	print(n);
	return 0;
}
