FCFS CPU Scheduling Algorithm using c

#include<stdio.h>
#include<string.h>
int main()
{
  char pn[10][10],t[10];
    int arr[10],bur[10],star[10],finish[10],tat[10],wt[10],i,j,n,temp;
    int totwt=0,tottat=0;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the ProcessName, Arrival Time& Burst Time:");
        scanf("%s%d%d",&pn[i],&arr[i],&bur[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                temp=bur[i];
                bur[i]=bur[j];
                bur[j]=temp;
                strcpy(t,pn[i]);
                strcpy(pn[i],pn[j]);
                strcpy(pn[j],t);
            }
 
        }
    }
    for(i=0; i<n; i++)
    {
        if(i==0)
            star[i]=arr[i];
        else
            star[i]=finish[i-1];
        wt[i]=star[i]-arr[i];
        finish[i]=star[i]+bur[i];
        tat[i]=finish[i]-arr[i];
    }
    printf("\nPName Arrtime Burtime WaitTime Start TAT Finish");
    for(i=0; i<n; i++)
    {
        printf("\n%s\t%3d\t%3d\t%3d\t%3d\t%6d\t%6d",pn[i],arr[i],bur[i],wt[i],star[i],tat[i],finish[i]);
        totwt+=wt[i];
        tottat+=tat[i];
    }
    printf("\nAverage Waiting time:%f",(float)totwt/n);
    printf("\nAverage Turn Around Time:%f",(float)tottat/n);
    return 0;
}



Output:
Enter the number of processes:3
Enter the ProcessName, Arrival Time& Burst Time:p1 2 4
Enter the ProcessName, Arrival Time& Burst Time:p2 4 7
Enter the ProcessName, Arrival Time& Burst Time:p3 3 8

PName Arrtime Burtime WaitTime Start TAT Finish
p1        2       4       0       2          4       6
p3        3       8       3       6         11      14
p2        4       7      10      14         17      21
Average Waiting time:4.333333
Average Turn Around Time:10.666667
--------------------------------
Process exited after 24.96 seconds with return value 0
Press any key to continue . . .

