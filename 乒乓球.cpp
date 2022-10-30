#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
int a[100000];

int main(){
	int w,f,num;
	char s;
	int b,c;
	w=f=0;
	num=0;
    for(int i=1;cin>>s&&s!='E';i++){
    	if (s=='W') a[i]=1;
    	else a[i]=2;
	} 
	for(int i=1;1;i++){
		if(a[i]==1) w+=1;
		else if (a[i]==2) f+=1;
		else if (a[i]==0) {
			printf("%d:%d\n\n",w,f);
			break;
		} 
		num+=1;
		if((w>=11 || f>=11) && (w-f>=2 || f-w>=2)){
		    printf("%d:%d\n",w,f);
			w=f=0;
			num=0;
		}
	}
	w=f=num=0;
	for (int i=1;1;i++){
		if(a[i]==1) w+=1;
		else if (a[i]==2) f+=1;
		else if (a[i]==0) {
			printf("%d:%d\n\n",w,f);
			break;
		} 
		num+=1;
		if((w>=21 || f>=21) && (w-f>=2 || f-w>=2)){
		    printf("%d:%d\n",w,f);
			w=f=0;
			num=0;}
	}
	return 0;
}
