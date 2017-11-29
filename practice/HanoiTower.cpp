/*汉诺塔问题*/
#include<iostream>
#include<stdio.h>
using namespace std;
int hanoi(int,int,int,int);
static int k=0;
int main()
{
	int n=1;
	while(n>0)
	{
		k=0;
		cin>>n;
		int step = hanoi(n,1,2,3);
		cout<<"移动"<<n<<"个盘子，一共需要"<<step<<"步"<<endl;
	}
 } 
 int hanoi(int n,int x,int y,int z)
 {
 	if(n==1)
	{
		printf("第%d步 ：move %d to %d\n",++k,x,z); //直接将第一根柱子x上面的一个盘子，移动到第三根柱子z上面 
	}
	else
	{
	hanoi(n-1,x,z,y);//将第一根柱子x上的n-1个盘子借助第三根柱子z移动到第二根柱子y上面放着，故顺序为x,z,y 
	printf("第%d步 ：move %d to %d\n",++k,x,z);//将第一根柱子上的n直接挪到第三根柱子上 
	hanoi(n-1,y,x,z);//将第二根柱子y上的n-1个盘子，借助第一根柱子x，移动到第三根柱子z上面,故顺序为y,x,z 
	return k;
	}
 }
