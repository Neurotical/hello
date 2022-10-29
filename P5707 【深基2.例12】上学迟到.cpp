#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,v;
	int m=0;
	int h=0;
	cin>>s>>v;
	m=(s-1)/v+1+10;
	while(m>60){
		h+=1;
		m-=60;
	}
	if(h>8){
		printf("%02d:%02d",31-h,60-m);
	}
	else
	  printf("%02d:%02d",7-h,60-m);
	return 0;
} 
//学校和 yyy 的家之间的距离为 ss 米，而 yyy 以 vv 米每分钟的速度匀速走向学校。

//在上学的路上，yyy 还要额外花费 1010 分钟的时间进行垃圾分类。

//学校要求必须在上午 \textrm{8:00}8:00 到达，请计算在不迟到的前提下，yyy 最晚能什么时候出门。

//由于路途遥远，yyy 可能不得不提前一点出发，但是提前的时间不会超过一天。
