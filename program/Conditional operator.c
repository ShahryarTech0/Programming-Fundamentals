#include<stdio.h>
int main(){
	int x;
	printf("Enter the number\n");
	scanf("%d",&x);
	
	x%2==0?printf("number is positive"):printf("number is negative");            //Conditional operator(?:)
}
