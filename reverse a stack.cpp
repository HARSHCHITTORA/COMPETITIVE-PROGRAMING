#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int>&s,int temp)
{
	if(s.size()==0)
	{
		s.push(temp);
		return;
	}
	int val=s.top();
	s.pop();
	insert(s,temp);
	s.push(val);
	return;
}
void reverse(stack<int>&s)
{
	if(s.size()==1)
	{
		return;
	}
	int temp=s.top();
	s.pop();
	reverse(s);
	insert(s,temp);
	return;
}
int main() {
    stack<int>s;
    s.push(1);
    s.push(7);
    s.push(4);
    s.push(0);
    s.push(9);

	reverse(s);
	
    cout<<"after reverse"<<endl; 
	 while (!s.empty()) {
        cout << ' ' << s.top();
        s.pop();
    }
}

