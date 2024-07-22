
#include<LPC214X.h>
int main(){

	
IODIR0|=(0x01<<3);//set direction as output
IODIR0|=(0x01<<4);
IODIR0|=(0x01<<5);//set direction as output
IODIR0|=(0x01<<6);
IODIR0|=(0x01<<7);//set direction as output
IODIR0|=(0x01<<8);
IODIR0|=(0x01<<9);//set direction as output

while(1){

	IOSET0|=(0x01<<3);
	IOSET0|=(0x01<<4);
	IOSET0|=(0x01<<5);
	IOSET0|=(0x01<<6);
	IOSET0|=(0x01<<7);
	IOSET0|=(0x01<<8);
	IOSET0|=(0x01<<9);
	}
	
	
	}	
