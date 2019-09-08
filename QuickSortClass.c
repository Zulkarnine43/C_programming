#include<stdio.h>
int partition(int A[],int p, int r)
{

    int pivot,temp,i,j;
    pivot=A[r];
    i=p-1;
    for(j=p;j<=r;j++){
        if(A[j]<A[r]){
            i=i+1;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
           i=i+1;
          temp=A[i];
            A[i]=A[r];
            A[r]=temp;
            return i;
}
void quicksort(int A[],int p, int r)
{

    int pivot;
    if(p<r)
    {

        pivot=partition(A,p,r);
        quicksort(A,p,pivot-1);
        quicksort(A,pivot+1,r);
    }
}
int main()
{

    int A[5]={5,4,3,2,1};
    int i;
    quicksort(A,0,4);
    printf("print the array::::");
    for(i=0;i<5;i++)
    {

        printf("%d\t",A[i]);
    }
}
