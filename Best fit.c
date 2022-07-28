#include<stdoio.h>
void main()
{
int fragment[20],b[20],p[20],i,j,nb,np,temp,lowest=9999;
static int barray[20],parray[20];
printf("\n\t\t\tMemory Management Scheme - Best Fit");
printf("\nEnter the number of blocks:");
scanf("%d",&nb);
printf("Enter the number of processes:");
scanf("%d",&np);
printf("\nEnter the size of the blocks:-\n");
for(i=1;i<=nb;i++)
    {
printf("Block no.%d:",i);
        scanf("%d",&b[i]);
    }
printf("\nEnter the size of the processes :-\n");
for(i=1;i<=np;i++)
    {
        printf("Process no.%d:",i);
        scanf("%d",&p[i]);
    }
for(i=1;i<=np;i++)
{
for(j=1;j<=nb;j++)
{
if(barray[j]!=1)
{
temp=b[j]-p[i];
if(temp>=0)
if(lowest>temp)
{
parray[i]=j;
lowest=temp
}
}
}
fragment[i]=lowest;
barray[parray[i]]=1;
lowest=10000;
}
printf("\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment");
for(i=1;i<=np && parray[i]!=0;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,p[i],parray[i],b[parray[i]],fragment[i]);
}

Out put:
 Memory Management Scheme - Best Fit
Enter the number of blocks:5
Enter the number of processes:5
Enter the size of the blocks:-
Block no.1:200
Block no.2:300
Block no.3:400
Block no.4:500
Block no.5:600
Enter the size of the processes :-
Process no.1:250
Process no.2:365
Process no.3:456
Process no.4:567
Process no.5:645

Process_no      Process_size    Block_no        Block_size      Fragment
1               250             2               300             50
2               365             3               400             35
3               456             4               500             44
4               567             5               600             33
--------------------------------
Process exited after 58.08 seconds with return value 0
Press any key to continue . . .
