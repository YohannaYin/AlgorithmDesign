/*
��������5�ĸ����Ϳ����ˣ�Ҫע����� 
*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	int mul=0;
	scanf("%d",&n);
	while(n)
	{
		n/=5;
		mul+=n;
	 } 
	printf("mul = %d",mul);
	return 0;
}
