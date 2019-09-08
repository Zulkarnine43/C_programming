#include<stdio.h>
int main()
{

    int n,c,array[100],d,temp;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    printf("Enter %d integers\n", n);
    for(c=0;c<n;c++){
        scanf("%d",&array[c]);
    }


    for(c=0;c<n-1;c++){
        for(d=0;d<n-c-1;d++){
                if(array[d]>array[d+1]){
                    temp=array[d];
                    array[d]=array[d+1];
                    array[d+1]=temp;
                }
                }
    }
    printf("Sorted list are:");
    for(c=0;c<n;c++){
        printf("%d\n",array[c]);
    }
    }
