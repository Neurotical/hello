#include<bits/stdc++.h>
using namespace std;
int a[4];
int main()
{ int n,ans,b,mnum,num,mzu;
  scanf("%d",&n);
  mnum=0;
  mzu=0;
  if (n==1||n==2||n==5 ){
  	printf("-1");
  }
  else if (n<=13){
  	for (int i=1;i<=n/3;i++){
	  
  	  if ((n-i*3)%4==0){
		num=i+(n-i*3)/4;
		if (num>mnum){
			mnum=num;
			a[2]=(n-i*3)/4;
			a[3]=i;
		}
	 }
   }
   cout<<0<<" "<<a[2]<<" "<<a[3];
  }
  else {
  	ans=n/14;
  	if (n%14==1 || n%14==2 || n%14==5){
  		ans--;b=14+n%14;
  		for (int i=1;i<=b/3;i++){
  			if ((b-i*3)%4==0){
  				num=ans*3+i+(b-i*3)/4;
  				if (num>mnum){
  					mnum=num;
  					a[1]=ans;a[2]=ans+(b-i*3)/4;a[3]=ans+i;
				  }
			  }
		  }
	  }
	else {
	  	b=n%14;
	  	if (b!=0) {
		  for (int i=1;i<=b/3;i++){
	  		if ((b-i*3)%4==0){
  				num=ans*3+i+(b-i*3)/4;
  				if (num>mnum){
  					mnum=num;
  					a[1]=ans;a[2]=ans+(b-i*3)/4;a[3]=ans+i;
				  }
			  }
		  }
	   }
	   else a[1]=ans;a[2]=ans;a[3]=ans;
	}
	
	  
	 cout<<a[1]<<" "<<a[2]<<" "<<a[3];
  }
  	
  return 0;
}

