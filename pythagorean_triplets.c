#include <stdio.h>
#include <math.h> 
int main( ) 
{ 
int a,b,c;
float ts;
for(a=1;a<30;a++){
	for(b=1;b<30;b++){
		c=ts=sqrt(a*a + b*b );
		if(ts-c==0 &&(a>b)){
			printf("(%d,%d,%d)\n",a,b,c);
		};
	};
};
return 0 ;
} 
