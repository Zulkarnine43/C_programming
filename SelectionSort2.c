#include<stdio.h>
int main()
{

    int n,c,d,array[100],temp,position;
    printf("Number of nodes:");
    scanf("%d",&n);
    printf("Enter %d integer\n",n);
    for(c=0;c<n;c++){

        scanf("%d",&array[c]);
    }
    for(c=0;c<n-1;c++){
        position=c;
        for(d=c+1;d<n;d++){
          if(array[position]>array[d]){
            position=d;
          }
          if(position!=c) {
            temp=array[c];
            array[c]=array[position];
            array[position]=temp;
          }
        }
    }
    printf("Sorted list in ascending order:\n");

   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", array[c]);

   return 0;

}
