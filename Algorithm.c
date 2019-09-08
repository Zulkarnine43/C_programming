#include<stdio.h>
int main()
{
    int a[10],i,j,k,n=5;
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    selection_sort(a,n);
    printf("Acesnding order: \n");


    for(i=0; i<n; i++)
        printf("%d",a[i]);

    printf("\n Decending order:");
    for(i=n-1; i>=0; i--)
        printf("%d",a[i]);
}
void selection_sort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
