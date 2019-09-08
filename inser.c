#include <stdio.h>
#include <stdlib.h>


/* Structure of a node */
struct node {
    int data;          // Data
    struct node *next; // Address
};
    struct node *head;


void createList(int n);
void displayList();
void insertFirts();




 int main()
{
    int n, choice;

    /*
     * Create a singly linked list of n nodes
     */
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("\n press 1 to insert first node : ");
    scanf("%d", &choice);


    if(choice == 1){
        insertFirts();
    }





    printf("\nData in the list \n");
    displayList();





    printf("\nData in the list \n");
    displayList();





     return 0;
}


/*
 * Create a list of n nodes
 */
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    /*
     * If unable to allocate memory for head node
     */
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        /*
         * In data of node from the user
         */
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; // Link the data field with data
        head->next = NULL; // Link the address field to NULL

        temp = head;

        /*
         * Create n nodes and adds to linked list
         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            /* If memory is not allocated for newNode */
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; // Link the data field of newNode with data
                newNode->next = NULL; // Link the address field of newNode with NULL

                temp->next = newNode; // Link previous node i.e. temp to the newNode
                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}


/*insert first node of the linked list*/
void insertFirts(){

   //create a new node
   struct node *newItem =(struct node*)malloc(sizeof(struct node));
   printf("\nEnter data  :");
   scanf("%d",&newItem->data);

   newItem->next = NULL;
   //insert the new node at the head
   newItem->next = head;
   head = newItem;

}





/*
 * Displays the entire list
 */
void displayList()
{
    struct node *temp;
    int c;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        c=0;
        temp = head;
        while(temp != NULL)
        {

            printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
            c++;                               //counter
        }
    }
    printf("\n Total nodes = %d\n",c);
}


