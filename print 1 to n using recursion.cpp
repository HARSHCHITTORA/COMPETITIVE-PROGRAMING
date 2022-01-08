//method 1;

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
#################################################################################################################################################################
//method 2

#include<iostream>
using namespace std;
void print(int n)
{
	if(n==1)
	{
		cout<<n<<" ";
		return;
	}
	print(n-1);
	cout<<n<<" ";
   
}
int main()
{
	int n;
	cin>>n;
	print(n);
	return 0;
}
*************************************************************************************************************************************************************

// print n to 1 using recursion

#include<iostream>
using namespace std;
void print(int n)
{
	if(n==1)
	{
		cout<<n<<" ";
		return;
	}
    cout<<n<<" ";
	print(n-1);

   
}
int main()
{
	int n;
	cin>>n;
	print(n);
	return 0;
}
