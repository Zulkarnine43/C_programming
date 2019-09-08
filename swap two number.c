#include<stdio.h>
int main()
{
    int num1,num2,sum,i,j;
    printf("Enter number:");
    scanf("%d",&j);
    for(i=0;i<j;i++){
    scanf("%d",&num1);
    scanf("%d",&num2);
    }
    for(i=0;i<j;i++){
    i=num1;
    num1=num2;
    num2=i;
    }
    printf(" after swap %d\n",num1);
    printf("after swap %d\n",num2);
    return 0;
}
