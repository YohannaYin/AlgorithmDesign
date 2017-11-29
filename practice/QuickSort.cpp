/*
非分治策略 
快速排序，第一种写法，双向扫描，首先要选取主元，prior，然后将小于主元的放在左边，大于主元的放在主元右边 
*/
#include<stdio.h>
#include<iostream>
#include<malloc.h>
using namespace std;
void swap(int *a,int *b);
void quickSort(int*,int);
int main()
{
	int n;
	scanf("%d",&n);
	int *arr=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	quickSort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	return 0;
 } 
void quickSort(int *arr,int n)
{
	int prior = arr[0];
	int i=1,j=n-1;
	while(i<j)
	{
		while(arr[j]>prior)
			j--;
		while(arr[i]<=prior)
			i++;
		swap(arr[i],arr[j]);
	}
	swap(arr[i],arr[j]);//此处由于i会比j大，故需要将arr[i]和arr[j]进行交换 
	swap(arr[j],arr[0]);
} 
void swap(int *a,int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp; 
}
