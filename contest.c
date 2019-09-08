#include<stdio.h>

int main()
{
    int a[]={1 ,2 ,4 ,3, 1},count=0,i;
    for(i=0;i<5;i++){
     if(a[0]==a[i]){
            i++;
        count=count++;
     }
    }
     if( count==2){
     printf("%d",count);
     return 0;
}
}
