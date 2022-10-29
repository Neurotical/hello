#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
int n,m,x;
int a[maxn];
int binary(int l,int r,int x){
	int mid,ans=0;
	while(l<=r){
		mid=l+(r-l)/2;
		if(a[mid]>x)r=mid-1;
		else if(a[mid]<x)l=mid+1;
		else ans=mid,r=mid-1;
	}
	if(!ans)
	return -1;
	else return ans;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	while(m--){
		scanf("%d",&x);
		printf("%d ",binary(1,n,x));
	}
	cout<<endl;
	return 0;
}

