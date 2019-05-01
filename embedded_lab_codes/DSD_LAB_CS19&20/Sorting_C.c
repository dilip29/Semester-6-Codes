#include<reg51.h>

void main()
{
	unsigned int mydata[]={25,33,56,12,45};
	unsigned char i,j;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(mydata[j]<mydata[i])
			{
				unsigned int temp;
				temp=mydata[i];
				mydata[i]=mydata[j];
				mydata[j]=temp;
			}
		}
	}
	P0=mydata[4];
}