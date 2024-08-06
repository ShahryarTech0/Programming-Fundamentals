#include<stdio.h>
int main(){
	int number,rem,a,b,c,sum=0;
	printf("Enter the number\n");
	scanf("%d",&number);

	do {
		rem=number%8; 
		number=number/8;
		printf("%d",rem);
		do{
			rem=rem%10;
			rem=rem/10;
			printf("%d\n",rem);
		}
		while(rem!=0);
		} while(number!=0);
		
	
}
   


