#include<bits/stdc++.h>
using namespace std;
int a[1010]; 
int fic(int n){
	a[1]=1;
    for(int i=1;i<=n;i++){
    	for (int j=1;j<=i/2;j++){
    		a[i]=a[j]+a[i];
		}
	}
	return a[n];
}

int main(){
    int n,s,num;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    	a[i]=1;
	}

    num=fic(n);
	printf("%d",num);
	return 0;	
}
