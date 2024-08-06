#include<stdio.h>
int main(){
	float c,d,e,f,g,h;
	int a,b;
	printf("Enter the Customer id: ");
	scanf("%d",&a);
	printf("Enter the customer name: ");
	scanf("%s",&b);
	printf("Enter the Unit Consumed: ");
	scanf("%f",&c);
	if(c<=199){
		d=c*1.20;
		printf("The total amount to pay the customer is = %f\n",d);
	}
	else if(c>=200 && c<400){
		e=c*1.50;
		printf("The total amount to pay the customer is = %f",e);
	}
	else if(c>=400 && c<600){
		f=c*1.80;
		h=(f*15)/100;
		printf("The total amount to pay the customer is = %f",h);
	}
	else{
		g=c*2.00;
		printf("The total amount to pay the customer is = %f",g);
	}
}
