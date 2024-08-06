#include<stdio.h>
int main(){
	float qty,rate,tot,dis;
	dis=0;
	printf("enter the value of qty");
	scanf("%f",&qty);
	printf("enter the value of rate");
	scanf("%f",&rate);
	
	if(qty>1000){
	dis=10;\
	tot=(qty*rate)-(qty*rate*dis)/100;
	printf("the value of tot=%f",tot);
	}
	else{
		tot=(qty*rate)-(qty*rate*dis)/100;
		printf("the value of tot=%f",tot);
	}
}
