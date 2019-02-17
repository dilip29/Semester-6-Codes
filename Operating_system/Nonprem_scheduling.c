#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

//int at[]={0,1,2,3,4,5},bt[]={4,5,1,2,3,6},ct[6]={0},prioty[]={4,5,7,2,1,6},index[6]={0,1,2,3,4,5},cycles=6,i;
int at[10],bt[10],ct[10]={0},cycles,i,n,prioty[10],temp_bt[10]={0};
int index[10]={0,1,2,3,4,5,6,7,8,9};

printf("enter n \n");
scanf("%d",&n);

printf("enter at\n");
for(i=0;i<n;i++)
scanf("%d",&at[i]);

printf("enter bt\n");
for(i=0;i<n;i++)
scanf("%d",&bt[i]);

printf("enter priority\n");
for(i=0;i<n;i++)
scanf("%d",&prioty[i]);

for(i=0;i<n;i++)
index[i]==i;

cycles=n;

int j,temp;

int current_arrtime=0,avg_turn=0,avg_wt=0;

for(i=0;i<n;i++)
temp_bt[i]=bt[i];


bool check=false;
int max_priorty=0,current_index,current_time=0;
while(cycles>=0)
{
//current_arrtime++;


for(i=0;i<6;i++)
{
  if((at[i]<=current_time)
  && (prioty[i]>max_priorty) && bt[i]>0)
  {
  max_priorty=prioty[i];
  current_index=i;
  //check=true;
  }

  }



current_time+=bt[current_index];
ct[current_index]=current_time;
bt[current_index]=0;
max_priorty=0;
cycles--;

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
{
printf("P%d       %d\n",index[i]+1,ct[i]);

}

for(j=0;j<n;j++)
{
avg_turn+=ct[j]-at[index[j]];
avg_wt+=ct[j]-at[index[j]]-temp_bt[index[j]];
//printf("%d\n",ct[j]-at[index[j]]-temp_bt[index[j]] );
}

printf("Average turn around time= %f\n",avg_turn/(1.0*n) );
printf("Average waiting time= %f\n",avg_wt/(1.0*n) );

}
