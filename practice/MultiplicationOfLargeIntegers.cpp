/*
��������ˣ���nΪ2���ݴ�λ�� 
*/
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int integerMulti(int,int,int);
int main()
{
	int x,y,n;
	cin>>x>>y>>n;
	int multi = integerMulti(x,y,n);
	cout<<x<<"��"<<y<<"�ĳ˻�Ϊ��"<<multi<<endl;
	return 0;
 } 
int integerMulti(int x,int y,int n)
{
	if(x == 0 || y == 0){
        return 0;
    }else if(n == 1){
        return x * y;
    }
 	int A =(int) x/pow(10,(int)(n/2));
 	int B = x - A * pow(10, n / 2);
 	int C = (int) y/pow(10,(int)(n/2));
 	int D = y - C * pow(10, n / 2);
 	int AC = integerMulti(A,C,n/2);
 	int BD = integerMulti(B,D,n/2);
 	int ABCD = integerMulti((A-B),(D-C),n/2)+AC+BD;
 	
 	return (AC*pow(10,(int)(n))+ABCD*pow(10,(int)(n/2))+BD);
} 
