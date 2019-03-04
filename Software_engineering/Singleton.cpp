#include<iostream>
using namespace std;

class Singleton{

private:
int data;
static int count; 
static Singleton*  instance;
Singleton(int data){
    this->data=data;
    count++;
}

public: 

static Singleton*  getinstance(int data){
if(instance==NULL)
instance=new Singleton(data);

return instance;
}

int print()
{

return data;
}


};

Singleton* Singleton::instance=NULL;
int Singleton::count=0;

int main()
{

Singleton* ptr1=Singleton::getinstance(5);
cout<<ptr1->print()<<endl;
cout<<ptr1<<endl;
Singleton *ptr2=Singleton::getinstance(2);
cout<<ptr2->print()<<endl;
cout<<ptr1<<endl;


    return 0;
}

