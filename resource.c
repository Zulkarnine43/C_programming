#include<stdio.h>

int main()
{
    int prNo,res,i,j,cheak,chCount=0;

    printf("Enter number of process: ");
    scanf("%d",&prNo);
    printf("Enter number of resource: ");
    scanf("%d",&res);

    int pros[prNo],work[res],avail[res],alloc[prNo][res],maxi[prNo][res],need[prNo][res],finish[prNo];

    printf("Enter Availabe:\n");
    for(i=0;i<res;i++){
        scanf("%d",&avail[i]);
    }
    for(i=0;i<res;i++){
        work[i]=avail[i];
    }
    printf("Enter Allocation:\n");
    for(i=0;i<prNo;i++){
        printf("Process %d:\n",i);
        for(j=0;j<res;j++){
            scanf("%d",&alloc[i][j]);
        }
    }

    printf("Enter Max:\n");
    for(i=0;i<prNo;i++){
        printf("Process %d:\n",i);
        for(j=0;j<res;j++){
            scanf("%d",&maxi[i][j]);
        }
    }

    for(i=0;i<prNo;i++){
        for(j=0;j<res;j++){
            need[i][j]=maxi[i][j]-alloc[i][j];
        }
    }

    printf("Need:\n");
    for(i=0;i<prNo;i++){
        printf("Process %d:\n",i);
        for(j=0;j<res;j++){
            printf("%d\n",need[i][j]);
        }
    }
    for(i=0;i<prNo;i++){
        for(j=0;j<res;j++){
            finish[i]=0;
        }
    }

    do{
        for(i=0;i<prNo;i++){
            for(j=0;j<res;j++){
                if(need[i][j]<=work[j]){
                    cheak=1;
                }
                else{
                    cheak=0;
                }
            }
            if(cheak==1){
                for(j=0;j<res;j++){
                    work[i]=work[i]+need[i][j];
                    finish[i]=1;
                    chCount++;
                }
            }
        }
    }while(chCount==pros);

    printf("Proceced:\n");
    for(i=0;i<prNo;i++){
        if(finish[i]==1){
            printf("Process %d \n",i);
        }
    }





    return 0;
}
