#include<stdio.h>
int main(){
	
	float BMI,weight,height;
	printf("Enter the value of weight(kilogram)\n");
	scanf("%f",&weight);
	printf("Enter the value of height(meter)\n");
	scanf("%f",&height);
	BMI=weight/height;
	printf("The value of BMI=%f\n",BMI);
	if(BMI<18.5){
		printf("BMI is Under weight=%f\n",BMI);
	}
	else{
		if(BMI>=18.5||BMI<=24.9){
				printf("BMI is Normal=%f\n",BMI);
		
		}
		else{
			if(BMI>=25||BMI<=29.5){
			printf("BMI is Over weight=%f\n",BMI);
			}
			else{
				printf("BMI is obese=%f\n",BMI);
			}
		}
	}
	
	return 0;
}
