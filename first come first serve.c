#include<stdio.h>

int main()
{
    int arrival_t[10],burst_t[10],service_t[10],i;
    float avg,total_wait=0,total_turn=0,n;
    char process[]={'A','B','C','D','E','F','G','H','I'};

    printf("Enter the numbers of process: ");
    scanf("%f",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Arrival Time for Process %c:", process[i]);
        scanf("%d",&arrival_t[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("Enter Burst Time for Process %c:", process[i]);
        scanf("%d",&burst_t[i]);
    }

    service_t[0]=0;
    printf("\nService Time for Process %c: %d\n",process[0],service_t[0]);
    for(i=1;i<n;i++)
    {
        service_t[i]=service_t[i-1]+burst_t[i-1];
        printf("Service Time for Process %c: %d\n",process[i],service_t[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nWaiting Time for Process %c: %d",process[i],service_t[i]-arrival_t[i]);
        total_wait=total_wait+service_t[i]-arrival_t[i];
    }

    avg = total_wait/n;

    printf("\nAverage Waiting Time: %.3f\n\n", avg);

    for(i=0;i<n;i++)
    {
        printf("Turnaround Time for Process %c: %d\n",process[i],(service_t[i]-arrival_t[i])+burst_t[i]);
        total_turn=total_turn+(service_t[i]-arrival_t[i])+burst_t[i];
    }

    avg = total_turn/n;

    printf("Average Turnaround Time: %.3f\n\n",avg);


    return 0;
}
