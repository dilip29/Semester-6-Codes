#include<iostream>
#include "Farmer_help.cpp"
#include "travel_planner.cpp"

using namespace std;

int main()
{
//Singleton crop1;



string month[]={"Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sept","Oct","Nov","Dec"};
string crop1,city1,crop2,city2;
double rain1,temp1,rain2,temp2;


cout<<"Enter name, ideal rainfall, ideal temp for crop1\n";
cin>>crop1>>rain1>>temp1;



//Weather* ptr1=Weather::getinstance(rain,t);


Farmer_help obj1(crop1,rain1,temp1);
cout<<"Ideal time for "<<obj1.getcrop()<<" crop is :"<<month[obj1.farmer_suggest()]<<endl;

//cout<<month[obj1.farmer_suggest(ptr1->getrainfall(),ptr1->gettemp())];




double rain3,temp3;
cout<<"Enter city1, ideal rainfall, ideal temp for city1\n";
cin>>city1>>rain3>>temp3;



Travel_planner city_obj1(city1,rain3,temp3);
cout<<"Ideal month for travel in "<<city_obj1.getcity()<<" is :"<<month[city_obj1.travel_suggest()]<<endl;



return 0;

}
