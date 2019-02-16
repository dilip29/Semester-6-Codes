#include<stdio.h>
#include <stdbool.h>

int main()
{

//int at[]={6,3,4,1,2,5},bt[]={1,3,6,5,2,1},ct[6]={0},index[6]={0,1,2,3,4,5},cycles=6,n=6,i,total,tat[10]={0},wt[10]={0};


int at[10],bt[10],ct[10]={0},i,n,tat[10]={0},wt[10]={0},total,temp_bt[10]={0};
int index[10]={0,1,2,3,4,5,6,7,8,9};
printf("enter n \n");
scanf("%d",&n);

printf("enter at\n");
for(i=0;i<n;i++)
scanf("%d",&at[i]);

printf("enter bt\n");
for(i=0;i<n;i++)
scanf("%d",&bt[i]);

for(i=0;i<n;i++)
index[i]==i;



int sml_indx=0,j,temp;

int avg_wt=0,avg_turn=0;

int current_index,min_bt=100000,current_arrtime=0;
bool check=false;

for(i=0;i<n;i++)
temp_bt[i]=bt[i];

j=n;
while(j>0)
{
for(i=0;i<n;i++)
{
    if((at[i]<=current_arrtime) && (bt[i]<min_bt) && (bt[i]>0))
    {

        current_index=i;
        min_bt=bt[i];
        check=true;
    }
}
//printf("minbt=%d  index=%d   ",min_bt,current_index);



    if(check==false)
{
    current_arrtime++;
    continue;
}

    current_arrtime+=min_bt;
//printf("%d   ",current_arrtime);
//current_arrtime+=bt[i];

ct[current_index]=current_arrtime;
tat[current_index]=current_arrtime-at[current_index];
wt[current_index]=tat[current_index]-bt[current_index];
bt[current_index]=0;
min_bt=10000;
check=false;
j--;




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
printf("P%d       %d\n",index[i]+1,ct[i]);


/*
for(j=0;j<n;j++)
{
printf("ct=%d  index=%d \n",ct[j],index[j]);

}
*/

for(j=0;j<n;j++)
{
avg_turn+=ct[j]-at[index[j]];
avg_wt+=ct[j]-at[index[j]]-temp_bt[index[j]];
//printf("%d\n",ct[j]-at[index[j]] );
}

printf("Average turn around time= %f\n",avg_turn/(1.0*n) );
printf("Average waiting time= %f\n",avg_wt/(1.0*n) );
//return 0;



}
