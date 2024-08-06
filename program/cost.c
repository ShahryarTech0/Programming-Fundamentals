#include<stdio.h>
int main(){
	int a,b,total;
	printf("Enter the Cost price: ");
	scanf("%d",&a);
	printf("Enter the Selling price: ");
	scanf("%d",&b);
	total=b-a;
	if(a<b){
		printf("The PROFIT is = %d",total);
	}
	else{
		
		printf("The Loss is = %d",total);
	}
}
