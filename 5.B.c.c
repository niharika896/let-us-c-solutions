#include <stdio.h>
int main(){
	int ch,sum=21,co=1;
	while(sum){
		while(co){
			printf("enter your choice:");
			scanf("%d",&ch);
			if(ch>=1 && ch<=4){
			sum-=ch;co=0; printf("New count: %d\n",sum);
			}
			else printf("enter valid input\n");
		}
		co=1;
		if(sum>9){
			if(sum==10){
			printf("Computer choice: 3\n");
			sum-=3;
			printf("New Count: %d\n",sum);
			}
			else{
				printf("Computer choice: 4\n");
				sum-=4;
				printf("New Count: %d\n",sum);
			}
		}
		else if(sum>5){
			printf("Computer choice: %d\n",sum-6);
			sum=6;
			printf("New Count: %d\n",sum);
		}
			
		else{
			if(sum==5)printf("Computer Choice: 4\n You lose!");
			else if(sum==4)printf("Computer Choice: 3\n You lose!");
			else if(sum==3)printf("Computer Choice: 2\n You lose!");
			else printf("Computer Choice: 1\n You lose!");
			break;
		}
	}

		
	return 0;
}
