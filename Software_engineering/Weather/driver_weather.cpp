#include<iostream>
#include "Farmer_help.cpp"
#include "travel_planner.cpp"
#include "weather.cpp"
using namespace std;

int main()
{
//Singleton crop1;

Weather* ptr1=Weather::getinstance();

Weather* ptr2=Weather::getinstance();


string month[]={"Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sept","Oct","Nov","Dec"};
string crop1,city1,crop2,city2;
int rain1,temp1,rain2,temp2;
cout<<"Enter name, ideal rainfall, ideal temp for crop1\n";
cin>>crop1>>rain1>>temp1;

cout<<"Enter name, ideal rainfall, ideal temp for crop2\n";
cin>>crop2>>rain2>>temp2;

Farmer_help obj1(crop1,rain1,temp1);
cout<<"Ideal time for "<<obj1.getcrop()<<" crop is :"<<month[ptr2->getidealmonth(obj1.getidealrain(),obj1.getidealtemp())]<<endl;


Farmer_help obj2(crop2,rain2,temp2);
cout<<"Ideal time for "<<obj2.getcrop()<<" crop is :"<<month[ptr2->getidealmonth(obj2.getidealrain(),obj2.getidealtemp())]<<endl;

Weather* ptr3=Weather::getinstance();

Weather* ptr4=Weather::getinstance();

cout<<"Enter city1"<<endl;
cin>>city1;
Travel_planner city_obj1(city1);
cout<<"Ideal month for travel in "<<city_obj1.getcity()<<" is :"<<month[ptr2->getidealmonth(rain1,temp1)]<<endl;


cout<<"Enter city2"<<endl;
cin>>city2;
Travel_planner city_obj2(city2);
cout<<"Ideal month for travel in "<<city_obj2.getcity()<<" is :"<<month[ptr2->getidealmonth(rain2,temp2)]<<endl;



return 0;

}
