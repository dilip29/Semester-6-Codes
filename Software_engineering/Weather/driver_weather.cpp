#include<iostream>
#include "Farmer_help.cpp"
#include "travel_planner.cpp"
#include "weather.cpp"
using namespace std;

int main()
{
//Singleton crop1;



double temp[]={35.5,25,30,34,32,45,40,44,32,45,31,30};
double rain[]={110,150,110,115,120,115,125,130,140,145,125,133};



string month[]={"Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sept","Oct","Nov","Dec"};
string crop1,city1,crop2,city2;
double rain1,temp1,rain2,temp2;


cout<<"Enter name, ideal rainfall, ideal temp for crop1\n";
cin>>crop1>>rain1>>temp1;

cout<<"Enter name, ideal rainfall, ideal temp for crop2\n";
cin>>crop2>>rain2>>temp2;

Weather* ptr1=Weather::getinstance(rain,temp);

Weather* ptr2=Weather::getinstance(rain,temp);

Farmer_help obj1(crop1,rain1,temp1);
cout<<"Ideal time for "<<obj1.getcrop()<<" crop is :"<<month[ptr2->getidealmonth(obj1.getidealrain(),obj1.getidealtemp())]<<endl;


Farmer_help obj2(crop2,rain2,temp2);
cout<<"Ideal time for "<<obj2.getcrop()<<" crop is :"<<month[ptr2->getidealmonth(obj2.getidealrain(),obj2.getidealtemp())]<<endl;



cout<<"\nCount="<<ptr1->getcount()<<"\n";





double rain3,temp3,rain4,temp4;
cout<<"Enter city1, ideal rainfall, ideal temp for city1\n";
cin>>city1>>rain3>>temp3;

cout<<"Enter city2, ideal rainfall, ideal temp for city2\n";
cin>>city2>>rain4>>temp4;

Weather* ptr3=Weather::getinstance(rain,temp);

Weather* ptr4=Weather::getinstance(rain,temp);

Travel_planner city_obj1(city1);
cout<<"Ideal month for travel in "<<city_obj1.getcity()<<" is :"<<month[ptr2->getidealmonth(rain3,temp3)]<<endl;

Travel_planner city_obj2(city2);
cout<<"Ideal month for travel in "<<city_obj2.getcity()<<" is :"<<month[ptr2->getidealmonth(rain4,temp4)]<<endl;


cout<<"\nCount="<<ptr3->getcount()<<"\n";

return 0;

}
