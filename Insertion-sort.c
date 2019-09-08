#include<stdio.h>
void Insertion_sort(int a[], int n);
void swep(int a[], int b, int c);
int araay_len(int a[]);

int main()
{
    int a[]={7,2,4,1,5,3}, n, i, j, c;
    n = ((int)sizeof(a)/sizeof(a[0]));
    printf("\n\n");
    printf("Before sort : ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\n");
    Insertion_sort(a,n);
    printf("After sort : ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\n");
    return 0;
}
void Insertion_sort(int a[], int n)
{
    int i, j, value, blank;
    for(i=1; i<n; i++){
        printf("loop %d\n", i);

        value = a[i];
        blank = i;
        printf("\t\tIndex = %d,\t value = %d\n", i, a[i]);
        while(blank>0&&a[blank-1]>value){
            a[blank]=a[blank-1];
            blank = blank-1;
        }
        a[blank]=value;

        printf("\t\t\tafter change\n");
        printf("\t\tIndex = %d,\t value = %d\n", i, a[i]);
        printf("\t\tIndex = %d,\t value = %d\n", blank, a[blank]);
    }
    printf("\n");
}
void swep(int a[], int b, int c)
{
     int temp = a[b];
        a[b] = a[c];
        a[c] = temp;
}

