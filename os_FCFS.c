#include<stdio.h>
 void main()
 {
     int i,n,bt[100],at[100],wt[100],tat[100],sT[100];
     float awt=0,atat=0;

     printf("Enter the no of process:");
     scanf("%d",&n);

      printf("Enter the arrival time:");
     for(i=0;i<n;i++)
        scanf("%d",&at[i]);


     printf("Enter the burst time:");
     for(i=0;i<n;i++)
        scanf("%d",&bt[i]);


     sT[0]=0;
     printf("process\t arrival time\t Burst time\t service time\t waiting time\t turn-around time:");
     for(i=0;i<n;i++)
     {
         wt[i]=0;
         tat[i]=0;
         sT[i+1]=sT[i]+bt[i];
         wt[i]=sT[i]-at[i];
         tat[i]=wt[i]+bt[i];
         awt=awt+wt[i];
         atat=atat+tat[i];
         printf("\n%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t",i+1,at[i],bt[i],sT[i],wt[i],tat[i]);
     }
     awt=awt/n;
     atat=atat/n;
     printf("average waiting time %f\n",awt);
     printf("average turn_around time %f",atat);

 }


