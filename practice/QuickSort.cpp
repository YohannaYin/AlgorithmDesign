/*
�Ƿ��β��� 
�������򣬵�һ��д����˫��ɨ�裬����Ҫѡȡ��Ԫ��prior��Ȼ��С����Ԫ�ķ�����ߣ�������Ԫ�ķ�����Ԫ�ұ� 
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
	swap(arr[i],arr[j]);//�˴�����i���j�󣬹���Ҫ��arr[i]��arr[j]���н��� 
	swap(arr[j],arr[0]);
} 
void swap(int *a,int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp; 
}
