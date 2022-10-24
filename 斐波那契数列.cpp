#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
 long long int a(int n,long long int b[]){
 	b[0]=0;
	 b[1]=1;
   	  for (int i=2;i<=n;i++){
		 b[i]=b[i-1]+b[i-2];   		
	   }
	return b[n];
 }
 
 int main(){
    int n;
    long long f;
    long long int b[50];
	scanf("%d",&n);
	f=a(n,b);
    printf("%.2lf",(double)f);
 	return 0;
 }
