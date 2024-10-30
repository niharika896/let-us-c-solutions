#include <stdio.h>
#include <math.h> 
int main( ) 
{ 
int clas, fail;
scanf("%d %d",&clas,&fail);
switch(clas){
	case 1:
		switch(fail>3){
			case 0:
				printf("grace 5");break;
			case 1:
				printf("no grace");break;
		}
		break;
	case 2:
		switch(fail>2){
			case 0:
				printf("grace 4");break;
			case 1:
				printf("no grace");break;
		}
		break;
	case 3:
		switch(fail>1){
			case 0:
				printf("grace 5");break;
			case 1:
				printf("no grace");break;
		}
		break;
	default:
		printf("invalid input of class");
}
return 0 ;
} 
