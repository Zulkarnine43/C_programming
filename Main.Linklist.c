#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;

struct node* BuildOneTwoThree() {
struct node* head = NULL;
struct node* second = NULL;
struct node* third = NULL;
head = malloc(sizeof(struct node));
second = malloc(sizeof(struct node));
third = malloc(sizeof(struct node));
head->data = 1;
head->next = second;
second->data = 2;
second->next = third;
third->data = 3;
third->next = head->data;
head=third;
print();
