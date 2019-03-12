#include<iostream>
#include<cmath>
#include "weather.cpp"
using namespace std;

int Weather::count=0;
Weather* Weather:: instance=NULL;
//double Weather:: rainfall[12]={0};
//double Weather :: temperature[12]={0};

class Farmer_help{

public: 

string crop;
double ideal_rain,ideal_temp;

Farmer_help(string crp, int rain,int temp)
{
    ideal_rain=rain;
    ideal_temp=temp;
    crop=crp;
}


int farmer_suggest(){

Weather* ptr=Weather::getinstance();
double *rain=ptr->getrainfall();
double *temp=ptr->gettemp();

double minr=abs(rain[0]-ideal_rain),mint=abs(temp[0]-ideal_temp);
int index=0;

for(int i=1;i<12;i++)
if((abs(rain[i]-ideal_rain)+abs(temp[i]-ideal_temp))<(minr+mint))
{
minr=abs(rain[i]-ideal_rain);
mint=abs(temp[i]-ideal_temp);
index=i;
}
return index;


}



int getidealrain(){

return ideal_rain;

}

int getidealtemp(){

return ideal_temp;

}

string getcrop()
{
    return crop;
}
};


