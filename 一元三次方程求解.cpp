#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#define int long long
using namespace std;
double eps=0.0001;
double p[4];
double a,b,c,d;
double f(double x){
	
	return a*x*x*x+b*x*x+c*x+d;
}
double find(double x){
	double r=x+1,l=x;
	double mid=(l+r)/2;
	while (r-l>=eps){
		if(f(l)*f(mid)<=0)r=mid;
		else l=mid;
		mid=(l+r)/2;
	}
	return l;
}
signed main(){
	int num=0;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	for(double i=-100.5;i<100;i=i+1){
		if ( f(i)*f(i+1)==0){
			printf("%d ",i);
			num+=1;}
		else if (f(i)*f(i+1)<0 ){
			num=num+1;
		    p[num]=find(i);
		    printf("%.2lf ",p[num]);
			
		}

	}
	return 0;
}
