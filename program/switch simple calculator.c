#include<stdio.h>
int main(){
	char operator;
	float num1,num2;
	
	printf(" SIMPLE CALCULATOR\n");
	printf("--------------------------------\n");
	printf("enter + for addition,- for subtraction,* for multiplication,/ for divien\n");
	scanf("%c",&operator);
	printf("enter the first number\n");
	scanf("%f",&num1);
		printf("enter the second number\n");
	scanf("%f",&num2);
	switch(operator){
		case '+':
			printf("The addition of %.0f and %.0f is=%.0f\n",num1,num2,num1+num2);
			break;
		case '-':
		    printf("The subtraction of %.0f and %.0f is=%.0f\n",num1,num2,num1-num2);
		    break;
		case '*':
			printf("The multiplication of %.0f and %.0f is=%.0f\n",num1,num2,num1*num2);
			break;
		case '/':
			printf("The divien of %.0f and %.0f is=%.0f\n",num1,num2,num1/num2);
	}
	
	printf("~~~~~~~~~~~~~~~~~~~~~wowwwwwww ~~~~~~~~~~~~~~~");
	
}
