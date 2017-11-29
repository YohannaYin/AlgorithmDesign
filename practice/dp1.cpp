/*
数字三角形 
有一个由非负整数组成的三角形，第一行只有一个数，除了最下行之外，每个数的左下方和右下方各有一个数，从第一行数开始，每次可以往左下或右下走一格，直到走到最下行，把沿途经过的数全部加起来，如何走才能使得这个和尽量大？
dp思想:
       从底层往上层遍历，那么第i行第j列到目前为止的最大和可以表示为max(i,j),它是由第i+1行最大的和加上数a[i][j]所组成的，那么就有max(i,j)=max(max(i+1,j),max(i+1,j+1))+a[i][j];
       此处采用递归的方法写解决方案 
*/ 
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
            
    } 
    return 0;
}
