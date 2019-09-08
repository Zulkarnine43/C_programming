#include<stdio.h>
void babbl_sort(int a[], int n);
void swep(int a[], int b, int c);

int main()
{
    int a[]={4,2,7,3,1,5}, n, i, j, c;
    n = ((int)sizeof(a)/sizeof(a[0]));
    printf("\n\n");
    printf("Before sort : ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\n");
    babbl_sort(a,n);
    printf("After sort : ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\n");
    return 0;
}
void babbl_sort(int a[], int n)
{
    int i, j, min;
    for(i=0; i<n-1; i++){
        printf("loop %d\n", i);
        for(j=i+1; j<n; j++){
            if(a[j]<a[i]){

                printf("\t\tindex %d swap by index %d\n", i+1,j+1 );
                swep(a,i, j);
            }
        }
    }
    printf("\n");
}
void swep(int a[], int b, int c)
{
     int temp = a[b];
        a[b] = a[c];
        a[c] = temp;
}
