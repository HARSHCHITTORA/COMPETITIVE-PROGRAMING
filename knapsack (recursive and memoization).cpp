#include<bits/stdc++.h>
#include <cstring>
using namespace std;


int knapsack(int wt[],int val[],int w,int n)
{      int static t[201][1002];
    memset(t,-1,sizeof(t));
	if(n==0 || w==0)
	{
		return 0;
	}
	if(t[n][w]!=-1)
	{
		return t[n][w];
	}
	if(wt[n-1]<=w)
	{
		return t[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
	}
	else if(wt[n-1]>w)
	{
		return t[n][w]=knapsack(wt,val,w,n-1);
	}
	
}
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int w = 50;
    int n = sizeof(val) / sizeof(val[0]);
     
    cout << knapsack(wt, val, w, n);
 
    return 0;
}
