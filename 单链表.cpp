#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef struct node {
	char name[20];
	int age;
	struct node* next;
}student; 

student* createlist(int n) {
	student* head =new student;
	student* pre=head;
	for(int i=0;i<n;i++){
		student* p=new student;
		printf("第%d位学生",i+1);
		cin>>p->name>>p->age;
		
		pre->next=p;
		pre=p;
		p->next=NULL;
	}
	return head;	
}
void display(student* head){
	student* p=head->next;
	while(p!=NULL){
		cout<<p->name<<","<<p->age<<endl;
		p=p->next;
	}
}
int main (){
		int n=5;
		student* head=createlist(n);
		display(head);
	  return 0;
}
