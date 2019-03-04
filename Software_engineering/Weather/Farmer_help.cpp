#include<iostream>
//#include "weather.cpp"
using namespace std;


class Farmer_help{

public: 

string crop;
int ideal_rain,ideal_temp;

Farmer_help(string crp, int rain,int temp)
{
    ideal_rain=rain;
    ideal_temp=temp;
    crop=crp;
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


