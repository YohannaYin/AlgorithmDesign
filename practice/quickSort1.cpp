 /*
快速排序，第二种写法，单向扫描，首先要选取主元，prior，然后将小于主元的放在左边，大于主元的放在主元右边 ； 
*/
#include<stdio.h>
#include<iostream>
#include<malloc.h>
using namespace std;
void swap(int *a,int *b);
void quicksort(int*,int,int);
int main()
{
	int n;
	scanf("%d",&n);
	int *arr=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	quicksort(arr,0,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	return 0;
 } 
void quicksort(int *arr,int l,int r)
{
	if(r<=l)
		return;
	int prior = arr[l];
	int q = l;
	for(int i=l;i<r;i++)
	{
		if(arr[i]<prior)//与主元进行比较 
			{
				q++;
				swap(arr[i],arr[q]);
			}
	}
	swap(arr[q],arr[l]);
	quicksort(arr,l,q);
	quicksort(arr,q+1,r);
} 
void swap(int *a,int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp; 
}
