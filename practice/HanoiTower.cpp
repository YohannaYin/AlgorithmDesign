/*��ŵ������*/
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
		cout<<"�ƶ�"<<n<<"�����ӣ�һ����Ҫ"<<step<<"��"<<endl;
	}
 } 
 int hanoi(int n,int x,int y,int z)
 {
 	if(n==1)
	{
		printf("��%d�� ��move %d to %d\n",++k,x,z); //ֱ�ӽ���һ������x�����һ�����ӣ��ƶ�������������z���� 
	}
	else
	{
	hanoi(n-1,x,z,y);//����һ������x�ϵ�n-1�����ӽ�������������z�ƶ����ڶ�������y������ţ���˳��Ϊx,z,y 
	printf("��%d�� ��move %d to %d\n",++k,x,z);//����һ�������ϵ�nֱ��Ų�������������� 
	hanoi(n-1,y,x,z);//���ڶ�������y�ϵ�n-1�����ӣ�������һ������x���ƶ�������������z����,��˳��Ϊy,x,z 
	return k;
	}
 }
