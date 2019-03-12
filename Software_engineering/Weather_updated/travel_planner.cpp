#include<iostream>
using namespace std;


class Travel_planner{

public: 

string city;
double ideal_rain,ideal_temp;

Travel_planner(string cty,double rain,double temp)
{
    city=cty;
        ideal_rain=rain;
    ideal_temp=temp;
    
}


string getcity()
{
    return city;
}


int travel_suggest(){


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


};


