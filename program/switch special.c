#include<stdio.h>
int main(){

	
	int number,a,b,x,i,c,y;
	printf("1-Addition\n");
	printf("2-Even odd\n");
	printf("3-N natural numbers\n");
	printf("4-exit\n\n");
	
	printf("enter the number\n");
	scanf("%d",&number);
	
	switch(number){
		case 1:
			printf("Enter the two numbers\n");
			scanf("%d %d",&a,&b);
			x=a+b;
			printf("The addition of two numbers are %d",x);
			break;
		case 2:
			printf("enter the number\n");
			scanf("%d",&y);
			if(y%2==0){
				printf("Number is positive");
			}
			else{
				printf("Number is negative");
			}
			break;
		case 3:
			printf("Enter the number\n");
			scanf("%d",&c);
			for(i=1;i<=c;i++){
				printf(" %d",i);
			}
			break;
		default:
			printf("invalid number");
		}
}
