#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
    struct node *head;

void createList(int n);
void displayList();
void insertFirst();
void insertLast();
void deleteLast();
void deleteFirst();
//void search();

int main()
{
    int n,select;

    printf("Enter the total number of NOdes:");
    scanf("%d",&n);
    createList(n);

    printf("\n Data in List:\n");
    displayList();

    printf("Enter the desire Number to Select:\n");
    printf("1. Insert First\n 2. Insert Last\n 3. Delete First\n 4. Delete Last\n");
    scanf("%d",&select);

    if(select==1) {insertFirst();displayList();}
    else if(select==2) {insertLast();displayList();}
    else if(select==3) {deleteFirst();displayList();}
    else if(select==4) {deleteLast();displayList();}
    //else if(select==5) search();
    else{
        printf("Invalid Input\n");
    }

    printf("Data In List\n");
    displayList();

    return 0;
}

void createList(int n){
    struct node *newNode,*tempNode;
    int data,i;

    head=(struct node *)malloc(sizeof(struct node));

    if(head==NULL){
        printf("Unable to Allocate Memory\n");
    }
    else{
        printf("Enter the data of 'Node 1': ");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;

        tempNode=head;

        for(i=2;i<=n;i++){
            newNode=(struct node*)malloc(sizeof(struct node));

            if(newNode==NULL){
                printf("Unable to Allocate Memory\n");
                break;
            }
            else{
                printf("Enter the Data of 'Node %d':",i);
                scanf("%d",&data);

                newNode->data=data;
                newNode->next=NULL;

                tempNode->next=newNode;
                tempNode=tempNode->next;
            }

        }
        printf("\nSingly Link List Created\n");
    }
}

void insertFirst()
{
    struct node*newItem=(struct node*)malloc(sizeof(struct node));

    printf("Enter the Data To Be Inserted: ");
    scanf("%d",&newItem->data);

    newItem->next=NULL;

    newItem->next=head;
    head=newItem;
}
void insertLast()
{
    struct node*newItem=(struct node*)malloc(sizeof(struct node));
    struct node*tempNode;

    printf("Enter the Data To Be Inserted: ");
    scanf("%d",&newItem->data);
    newItem->next=NULL;

    while(tempNode->next!=NULL){
        tempNode=tempNode->next;
    }
    newItem->next=tempNode->next;
    tempNode->next=newItem;
}
void deleteFirst()
{
    struct node*toDelete;

    if(toDelete==NULL){
        printf("NO Data Available");
    }
    else{
        toDelete=head;
        head=head->next;

        printf("\nData Will Be Deleted: %d",toDelete->data);

        free(toDelete);

        printf("\nDeletion Successfull\n");
    }
}
void deleteLast()
{
    struct node*prev;
    struct node*cur;

    if(head==NULL){
        printf("NO Data Available\n");
    }
    else{
        cur=head;
        prev=NULL;

        while(cur->next!=NULL){
            prev=cur;
            cur=cur->next;
        }
        prev->next=cur->next;
        printf("Data Delated %d\n",cur->next);
        free(cur);
        printf("Delation Successful\n");

    }
}
void displayList()
{
    struct node*tempNode;
    int c=0;

    tempNode=head;
    while(tempNode!=NULL){
        c++;
        printf("   Data-%d=%d\n",c,tempNode->data);
        tempNode=tempNode->next;
    }

}
