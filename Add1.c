#include<stdio.h>
int main()
{
    int i,a[5]={12,16,10,17,9},Sum=0;
    for(i=0;i<5;i++){
        Sum=Sum+a[i];
    }
    printf("%d",Sum);
    return 0;
}

