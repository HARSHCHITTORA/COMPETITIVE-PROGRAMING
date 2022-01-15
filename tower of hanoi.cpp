#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(char s,char d,char h,int n)
{
	if(n==1)
	{   cout<<endl;
		cout<<"move "<<n<<" from "<<s<<" to "<<d<<endl;
		
		return;
	}
	towerOfHanoi(s,h,d,n-1);
	cout<<endl;
	cout<<"move "<<n<<" from "<<s<<" to "<<d<<endl;
	towerOfHanoi(h,d,s,n-1);
	return;
 } 

int main() 
{ 
    int n;
    cout<<"enter number of disk"<<endl;;
    cin>>n;
    towerOfHanoi('s','d','h',n); 
    return 0; 
} 

