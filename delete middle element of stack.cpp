#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int>&s,int k)
{
	if(k==1)
	{
		s.pop();
		return;
	}
	int temp=s.top();
	s.pop();
	solve(s,k-1);
	s.push(temp);
	return;
}
stack<int> del(stack<int>&s,int k)
{
	if(s.size()==0)
	{
		return s;
	}
	solve(s,k);
	return s;
}

int main() {
    stack<int>s;
    s.push(1);
    s.push(7);
    s.push(4);
    s.push(0);
    //s.push(9);
   int k;
   if(s.size()%2==0)
   {
       	k=s.size()/2;
   }
   else
   {
   	    k=s.size()/2 +1;
   }
    del(s,k);
     
	 while (!s.empty()) {
        cout << ' ' << s.top();
        s.pop();
    }
}

