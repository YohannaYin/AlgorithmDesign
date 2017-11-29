/*最近点对问题，分治法*/ 
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include <algorithm>
#define N 10005
#define INF 0xffff
using namespace std;
struct Point
{
	double x;
	double y;
}p[N];
double closestPair(int,int);
bool cmp(Point& a,Point& b)
{
	if(a.x!=b.x)
		return a.x<b.x;
	return a.y<b.y;
}
double dis (int i,int j)
{
	double d =sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
	return d;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>p[i].x>>p[i].y;
	sort(p,p+n,cmp);
	for(int i=0;i<n;i++)
		cout<<p[i].x<<" "<<p[i].y<<endl;       
	double d = closestPair(0,n);
	cout<<d<<endl;
	return 0;
 } 
 double closestPair(int l,int r)
 {
 	double d = INF;
 	if(l==r)
 		return d;
 	if(l+1==r)
 		return dis(l,r);
 	int mid = (l+r)/2;
 	double d1 = closestPair(l,mid);
 	double d2 = closestPair(mid+1,r);
    d = min(d1,d2);
 	for(int j=mid;j>=l;j--)
 	{
 		if(fabs(p[j].x-d)>0.0001)
 				break;
 		for(int i=mid;i<r;i++)
 		{
 			if(fabs(p[i].x-d)>0.0001)
 					break;
 			d = min(dis(i,j),d);
		}
	 }
 	return d;
 }
