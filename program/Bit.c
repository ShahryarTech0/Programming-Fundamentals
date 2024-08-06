#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5,num6,num7,num8;
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
	
	if(num4==1 && num7==1){
		num4=0;
		num7=0;
		printf("Bits are found to be turned off = %d %d %d %d %d %d %d %d \n",num1,num2,num3,num4,num5,num6,num7,num8);
	}
	else{
		printf("Bits are already turned off");
	}
}
