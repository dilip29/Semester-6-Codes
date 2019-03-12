#include<iostream>
#include<cmath>
using namespace std;

class Weather{

private:
 double rainfall[12],temperature[12];
static Weather* instance;
static int count;

Weather(){
//cout<<"Enter details Raifall and temperature\n";
count++;
double temp[]={35.5,25,30,34,32,45,40,44,32,45,31,30};
double rain[]={110,150,110,115,120,115,125,130,140,145,125,133};

for(int i=0;i<12;i++)
{
rainfall[i]=rain[i];
temperature[i]=temp[i];
}
//cin>>rainfall[i]>>temperature[i];

cout<<endl;
}


public:


static Weather* getinstance()
{
if(instance==NULL)
instance=new Weather();

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





