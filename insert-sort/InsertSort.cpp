/*************************************************************************
    > File Name: InsertSort.c
    > Author: YinHong
    > Mail: 15773287336@163.com 
    > Created Time: 2017年11月12日 星期日 12时57分40秒
 ************************************************************************/
#include<cstdio>
#include<iostream>
#include<array>
using namespace std;
int arr[10000];
void insertSort(int arr[],int n);
int main()
{
	printf("插入排序算法：");
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	insertSort(arr,n);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
void insertSort(int a[],int n)
{
	int key;
	for(int i=2;i<n;i++)
	{
		key = a[i];
		int j= i-1;//从序列的末尾开始遍历，直到找到比key值小的值
		while(j>0&&a[j]>key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=key;
	}
}
