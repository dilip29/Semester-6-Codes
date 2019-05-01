#include<reg51.h>

void main()
{
unsigned char mydata[]={"HelloWorld"};
unsigned char *ptr;
unsigned char i;
ptr=mydata;
ptr=0x0010;
for(i=0;i<10;i++)
{
	*ptr=mydata[i];
	ptr++;
}
}