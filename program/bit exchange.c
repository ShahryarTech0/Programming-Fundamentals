#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5,num6,num7,num8,a,b;
	printf("Enter the first bit \n");
	scanf("%d",&num1);
	printf("Enter the second bit \n");
	scanf("%d",&num2);
	printf("Enter the third bit \n");
	scanf("%d",&num3);
	printf("Enter the fourth bit \n");
	scanf("%d",&num4);
	printf("Enter the fifth bit \n");
	scanf("%d",&num5);
	printf("Enter the sixth bit \n");
	scanf("%d",&num6);
	printf("Enter the seventh bit \n");
	scanf("%d",&num7);
	printf("Enter the eighth bit \n");
	scanf("%d",&num8);
	
	
	a=num1;
	num1=num8;
	num8=a;
	b=num2;
	num2=num7;
	num7=b;
	
	printf("After exchange its higher bit into lower bit = %d %d %d %d %d %d %d %d",num1,num2,num3,num4,num5,num6,num7,num8);
}
