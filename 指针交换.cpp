#include<stdio.h>
void swap(int *n1,int *n2){
	if(*n1>*n2) {
		int tmp=*n2;
		*n2=*n1;
		*n1=tmp;
	}
}
void sort3(int *n1,int *n2,int *n3){
	swap(n1,n2);
	swap(n2,n3);
	swap(n1,n2);
}
int main (void){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		sort3(&a,&b,&c);
		printf("%d %d %d",a,b,c);
	  return 0;
}
