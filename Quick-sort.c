#include<stdio.h>
void quick_sort(int a[], int start ,int last);
void partition_sort(int a[], int start ,int last);
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
    quick_sort(a,0,n-1);
    printf("After sort : ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\n");
    return 0;
}
void swep(int a[], int b, int c)
{
     int temp = a[b];
        a[b] = a[c];
        a[c] = temp;
}

int partition (int a[], int low, int high)
{
    int pivot = a[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (a[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swep(a, j, i);
        }
    }
    swep(a, (i + 1),high);
    return (i + 1);
}

void quick_sort(int a[], int start ,int last)
{
    int pi;
    if(start<last){
        pi = partition(a,start,last);
        printf("%d\t", a[pi]);
        quick_sort(a,start ,pi-1);
        quick_sort(a, pi+1,last);
    }
}




