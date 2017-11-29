#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int result = n>>1;
	if(n%2==0)
	cout<<result<<endl;
	else
	cout<<(result+1)<<endl;
	return 0;
 } 
