#include<stdio.h>
int bainary_serch(int a[], int n, int x);

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9}, n,x,  i, j, c;
    n = ((int)sizeof(a)/sizeof(a[0]));
    printf("\n\n");
    printf("array element are : ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("search : ");
    scanf("%d", &x);
    printf("\n\n");

    c = bainary_serch(a,n, x);

    printf("Array position of %d is %d\n\n",x, c );
    return 0;
}
int bainary_serch(int a[],int n, int x)
{
    int i, j, mid, first, last;
    first = 0;
    last = n-1;
    while(first<=last){

        mid = first+last/2;

        if(a[mid]==x){

            return mid;
        }

        else if(x<a[mid])
            last=mid-1;
        else
            first = mid+1;
        printf("chacke at %d\n", mid);
    }
}
