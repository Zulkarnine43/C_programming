#include<stdio.h>
#include<stdlib.h>
void displayList();
 struct node{
 int data;
 struct node*next;
 };
  struct node*head=NULL;
 int main(){
     int x,i,n;
     printf("How many data want to input:\n");
     scanf("%d",&n);
     printf(" input your Data:\n");
     scanf("%d",&x);

struct node*temp=new node();
 temp->data=x;
 temp->next=NULL;
 head=temp;
 for(i=o;i<n;i++){
    scanf("%d",&x);
    node*temp=new node();
 temp->data=x;
 temp->next=NULL;
 temp1=head;
 while(temp1->next!=NULL)
 {
   temp1=temp1->next;
 }
 temp1->next=temp;
    print();
 }
 }
 void displayList();
 {
     node*temp=head;
     while(temp!=NULL){
        printf("%d",temp->data);
               temp=temp->next;
     }
 }
