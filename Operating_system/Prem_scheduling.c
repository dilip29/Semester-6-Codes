#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

//int at[]={1,2,2,3,3,4},bt[]={4,2,3,5,1,2},ct[6]={0},index[6]={0,1,2,3,4,5},cycles=6,i,priority[]={4,5,7,8,5,6};

int at[10],bt[10],ct[10]={0},cycles,i,n,priority[10],temp_bt[10]={0};
int index[10]={0,1,2,3,4,5,6,7,8,9};
printf("enter no. of processes n \n");
scanf("%d",&n);

printf("enter arrival time at\n");
for(i=0;i<n;i++)
scanf("%d",&at[i]);

printf("enter burst time bt\n");
for(i=0;i<n;i++)
scanf("%d",&bt[i]);

printf("enter priority\n");
for(i=0;i<n;i++)
scanf("%d",&priority[i]);

for(i=0;i<n;i++)
index[i]==i;

cycles=n;


int j,temp;

int current_arrtime=0,avg_turn=0,avg_wt=0;
bool check=false;
int max_priorty=0,current_index,t=0;

for(i=0;i<n;i++)
temp_bt[i]=bt[i];

while(cycles>0)
{
//current_arrtime++;


for(i=0;i<6;i++)
{
  if((at[i]<=current_arrtime)
  && (priority[i]> max_priorty) && bt[i]>0)
  {
  max_priorty=priority[i];
  current_index=i;
  check=true;
  }

  }


if(check==false)
{
  current_arrtime++;
  continue;
}

bt[current_index]--;

max_priorty=0;

  if(bt[current_index]==0)
  {
    cycles--;
    check=false;
  ct[current_index]=current_arrtime+1;
  }

current_arrtime++;


}


for(i=0;i<6;i++)
for(j=i+1;j<6;j++)
{
if(ct[i]>ct[j])
{
temp=ct[i];
ct[i]=ct[j];
ct[j]=temp;

temp=index[i];
index[i]=index[j];
index[j]=temp;
}
}

printf("Process Completion Time\n");
for(i=0;i<6;i++)
printf("P%d       %d\n",index[i]+1,ct[i]);

for(j=0;j<n;j++)
{
avg_turn+=ct[j]-at[index[j]];
avg_wt+=ct[j]-at[index[j]]-temp_bt[index[j]];
//printf("%d\n",ct[j]-at[index[j]]-temp_bt[index[j]] );
}

printf("Average turn around time= %f\n",avg_turn/(1.0*n) );
printf("Average waiting time= %f\n",avg_wt/(1.0*n) );

}
