#include<stdio.h>
void selection_sort(int a[], int n);
void swep(int a[], int b, int c);

int main()
{
    int a[]={2,7,4,1,5,3}, n, i, j, c;
    n = ((int)sizeof(a)/sizeof(a[0]));
    printf("\n\n");
    printf("Before sort : ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\n");
    selection_sort(a,n);
    printf("After sort : ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\n");
    return 0;
}
void selection_sort(int a[], int n)
{
    int i, j, min;
    for(i=0; i<n-1; i++){
        min = i;
        printf("loop %d\n", i+1);
        for(j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        if(min!=i){
            printf("\t\t%d swap by %d\n", a[i],a[min]);
            swep(a,i, min);
        }
        else
            printf("\t\tNo exchange\n");

    }
    printf("\n");
}
void swep(int a[], int b, int c)
{
     int temp = a[b];
        a[b] = a[c];
        a[c] = temp;
}
