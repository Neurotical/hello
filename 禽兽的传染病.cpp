#include<bits/stdc++.h>
using namespace std; 
unsigned long long get(int x,int n){
	if(n==0) 
	   return 1;
	else
	  return (x+1)*get(x,n-1);
}

int main(){
	int x,n;
	unsigned long long num;
	scanf("%d%d",&x,&n);
    cout<<get(x,n);
	return 0;
}
