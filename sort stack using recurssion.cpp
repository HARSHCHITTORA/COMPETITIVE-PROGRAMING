#include <iostream>
#include <stack>
using namespace std;
void insert_(stack<int>&s,int temp)
{
	if(s.size()==0 ||s.top()<=temp)
	{
		s.push(temp);
		return;
	}
	int val=s.top();
	s.pop();
	insert_(s,temp);
	s.push(val);
	return;
}
void sort_(stack<int>&s)
{
	if(s.size()==1)
	{
		return;
	}
	int temp=s.top();
	s.pop();
	sort_(s);
	insert_(s,temp);
	return;
}
int main() {
    stack<int>s;
    s.push(1);
    s.push(7);
    s.push(4);
    s.push(0);
   
    sort_(s);
     
	 while (!s.empty()) {
        cout << ' ' << s.top();
        s.pop();
    }
}
