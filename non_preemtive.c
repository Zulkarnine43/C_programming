#include<stdio.h>
int main()
{
    int i,j,n,t,p[100],at[100],bt[100],st[100],wt[100],tat[100];
    float awt=0,atat=0;

    printf("Enter the number or process:");
    scanf("%d",&n);

    printf("Enter the process number \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Enter the Arrival  time of the process\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }
    printf("Enter the burst time of the process\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (bt[j]>bt[j+1])
            {
                t=at[j];
                at[j]=at[j+1];
                at[j+1]=t;

                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;

                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;

            }
        }
    }
    printf("process\t    arrival time\t burst time\tservice time\t waiting time \t turn around time\n");
    st[0]=0;
    for (i=0;i<n;i++)
    {

        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {

            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        st[i+1]=st[i]+bt[i];
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d",p[i],at[i],bt[i],st[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("\nAverage waiting time %lf",awt);
    printf("\nAverage turnaround time %lf",atat);

}

