#include<iostream>
#include<cmath>
using namespace std;


class Weather{

private:
static double rainfall[12],temperature[12];
static Weather* instance;
static int count;

Weather(double rainfl[],double temprt[]){
cout<<"Enter details Raifall and temperature\n";
count++;

for(int i=0;i<12;i++)
{
rainfall[i]=rainfl[i];
temperature[i]=temprt[i];
}
//cin>>rainfall[i]>>temperature[i];

cout<<endl;
}


public:


static Weather* getinstance(double rainfl[],double temprt[])
{
if(instance==NULL)
instance=new Weather(rainfl,temprt);

return instance;

}

double* getrainfall()
{
return rainfall;
}

double* gettemp()
{
return temperature;
}

int getcount()
{
return count;
}

};

int Weather::count=0;
Weather* Weather:: instance=NULL;
double Weather:: rainfall[12]={0};
double Weather :: temperature[12]={0};



