#include<iostream>
using namespace std;


class Weather{

private:
static int rainfall[12],temperature[12];
static Weather* instance;

Weather(){
cout<<"Enter details Raifall and temperature\n";

for(int i=0;i<12;i++)
cin>>rainfall[i]>>temperature[i];
cout<<endl;
}


public:


static Weather* getinstance()
{
if(instance==NULL)
instance=new Weather();

return instance;

}


int getidealmonth(int rainvalue,int tempvalue)
{
int minr=abs(rainfall[0]-rainvalue),mint=abs(temperature[0]-tempvalue),index=0;

for(int i=1;i<12;i++)
if((abs(rainfall[i]-rainvalue)+abs(temperature[i]-tempvalue))<(minr+mint))
{
minr=abs(rainfall[i]-rainvalue);
mint=abs(temperature[i]-tempvalue);
index=i;
}
return index;
}
 

 

};



Weather* Weather:: instance=NULL;
int Weather:: rainfall[12]={0};
int Weather :: temperature[12]={0};



