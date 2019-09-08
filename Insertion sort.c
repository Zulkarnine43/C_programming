#include<stdio.h>
int main()
{
    int i,x,n=7,j,a[]={23,45,65,87,12,48,60,10};
    for(i=0;i<n;i++)
    {
        x=a[i];
        j=i-1;
        while(j>=0  && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
