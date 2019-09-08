#include<stdio.h>
int main()
{
    int i,n,A[100],ET[100],s[100],WT=0,TAT;
    float AVWT, AWT,AVTAT, ATAT;
    printf("Enter the number of process:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the Arrival Time :");
        scanf("%d",&A[i]);
    }


for(i=0;i<n;i++)
    {
        printf("Enter the Exicute Time %d:",i+1);
        scanf("%d",&ET[i]);
    }
    for(i=0;i<n;i++){
        s[i]=0;
        s[i]=s[i+1]+ET[i];
        printf("Enter the service Time %d:",s[i]);
    }

     printf("Process\t\tET\t\tWT\t\tTAT");
     for(i=0;i<n;i++)
     {
         WT+=ET[i];
         TAT=WT+ET[i];
         printf("\n%d\t\t%d\t\t%d\t\t%d\t%d",i,ET[i],s[i],WT,TAT);
         AWT+=WT;
         ATAT+=TAT;
     }
     AVWT=AWT/n;
     AVTAT=ATAT/n;
     printf("\nAverage waiting time %lf",AVWT);
     printf("\nAverage turnaround time %lf",AVTAT);

}
