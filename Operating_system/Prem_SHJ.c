#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

//int at[]={3,4,5,2,1,2},bt[]={4,2,1,6,8,4},ct[6]={0},index[6]={0,1,2,3,4,5},cycles=6,i;

int at[10],bt[10],ct[10]={0},cycles,i,n,temp_bt[10]={0};
int index[10]={0,1,2,3,4,5,6,7,8,9};
printf("enter no. of processes n \n");
scanf("%d",&n);

printf("enter arrival time at\n");
for(i=0;i<n;i++)
scanf("%d",&at[i]);

printf("enter burst time bt\n");
for(i=0;i<n;i++)
scanf("%d",&bt[i]);

for(i=0;i<n;i++)
index[i]==i;

cycles=n;

int j,temp=0;

int current_arrtime=0,avg_turn=0,avg_wt=0;

for(i=0;i<n;i++)
temp_bt[i]=bt[i];


bool check=false;
int current_bt=10000,current_index,t=0;
while(cycles>0)
{
//current_arrtime++;


for(i=0;i<n;i++)
{
  if((at[i]<=current_arrtime)
  && (bt[i]<current_bt) && (bt[i]>0))
  {
  current_bt=bt[i];
  current_index=i;
  check=true;
  }

  }
//printf("%d\n",current_bt);

// if shortest arrival time is not 0
if(check==false)
{
  current_arrtime++;
  continue;
}


bt[current_index]--;
current_bt=bt[current_index];

if(current_bt==0)
current_bt=10000;

  if(bt[current_index]==0)
  {
    //printf("inside cycles  ");
    cycles--;
    check=false;
  ct[current_index]=current_arrtime+1;
  }

  

current_arrtime++;


}


for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
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
for(i=0;i<n;i++)
{
printf("P%d       %d\n",index[i]+1,ct[i]);

}


for(j=0;j<n;j++)
{
avg_turn+=ct[j]-at[index[j]];
avg_wt+=ct[j]-at[index[j]]-temp_bt[index[j]];
printf("%d\n",ct[j]-at[index[j]]-temp_bt[index[j]] );
}

printf("Average turn around time= %f\n",avg_turn/(1.0*n) );
printf("Average waiting time= %f\n",avg_wt/(1.0*n) );




}
