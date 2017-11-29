/*mergeSort example
divide-and-conquer
根据课件的伪代码写成的归并排序的代码 
*/
#include<iostream>
#include<stdio.h>
#include<malloc.h> 
using namespace std;
void mergeSort(int[],int);
void merge(int[],int[],int[],int,int,int);
int main()
{
	int n;
	scanf("%d",&n);
	int *arr =(int *) malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	mergeSort(arr,n);
	for(int i=0;i<n;i++)
	printf("arr[%d]=%d ",i,arr[i]);
	cout<<endl;
	return 0;
}
void mergeSort(int arr[],int n)
{
	if(n<2)
		return;
	int * a = (int *)malloc(sizeof(int)*(n/2));  
	int * b;
	int l=n/2,r;
	if(n%2==0)
	{
	 	r=n/2;
	 	b = (int *)malloc(sizeof(int)*l);
	}
	else
	{
		r = n/2+1;
		b = (int *)malloc(sizeof(int)*r);
	}
	int *c =(int *) malloc(sizeof(int)*n);
	int l1=0,l2=0;
	for(int i=0;i<n;i++)
	{
		if(i<l)
		a[l1++]=arr[i];
		else
		b[l2++]=arr[i];
	}                                            
	mergeSort(a,l);
	mergeSort(b,r);
	merge(a,b,arr,n,l,r);//此处不可以将arr写成新的数组c，因为这样相当于没有对arr进行合并操作，自然没有返回正确的排序 
}
void merge(int a[],int b[],int c[],int n,int l,int r)
{
	int i=0;
	int j=0;
	int k=0;
	i=0;
	j=0;
	while(i<l&&j<r)
	{
		if(a[i]>b[j])
		{
			c[k]=b[j];
			j++;
		}
		else 
		{
			c[k]=a[i];
			i++;
		}
		k++;
	}
	if(i==l)
	{
		for(int ll=j;ll<r;ll++)
			{
				c[k]=b[ll];                           
				k++;
			}
	}
	else
	{
		for(int ll=i;ll<l;ll++)
			{
				c[k]=a[ll];
				k++;
			}
	}
}

