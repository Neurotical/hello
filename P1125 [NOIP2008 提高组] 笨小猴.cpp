#include<bits/stdc++.h>
#include <cstring>
using namespace std;
char a[120];
int b[30];

int main(){
	scanf("%s",a);
	int max,min;
	int tmp;
	int n=0;
	while (a[n]!=NULL){
		n++;
	}
	for (int i=0;i<=n-1;i++){
		tmp=a[i]-'a'; 
		b[tmp]+=1;
	}
	for(int i=0;i<=25;i++){
		if(b[i]>max) max=b[i];
		if((min==0 && b[i]>0)||(min>0 && b[i]<min &&b[i]!=0)) min=b[i];
	}
	bool q=false;
	if(max-min==0||max-min==1){q=true;
	}
	for(int i=2;i<max-min;i++){
		if((max-min)%i==0) q=true;
	}
	if (!q){
		printf("Lucky Word\n");
		printf("%d\n",max-min);
	}
	else {printf("No Answer\n");
	printf("%d\n",0);
	}
	return 0;
}
