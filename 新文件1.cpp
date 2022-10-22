#include <bits/stdc++.h>
using namespace std;

char b[100];
int main() {
	int n,a,j;
	cin>>n;
	a=n;
	j=0;
    b[0]=true;
	for (int i=2;i<=n-2;i++){
		while(a>0){
			j=j+1;
			b[j]=a%i;
			a=a/i;
		}
		for(int x=1;x<=j/2;x++){
			if (b[x]!=b[j-x+1]){
				b[0]=false;
			}
		}
		for (int o=1;o<=j;o++){
			b[o]=0;
		}
		j=0;a=n;
	}
    if (b[0]==true){
    	cout<<"true";
	}
	else cout<<"false";
	return 0;
}
