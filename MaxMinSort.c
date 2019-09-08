#include<stdio.h>
int main()
{
    int a[5],i,j,max;
        for(i=0;i<5;i++){
            scanf("%d",&a[i]);
        }
            if(a[0]>a[i]){
                max=a[0];
            }
                else if(a[0]<a[i]){
                    max=a[i];
                    }

        printf("%d",&max);
        return 0;
}
