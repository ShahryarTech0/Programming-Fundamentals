#include<stdio.h>
int main(){
	int num,i,a,b,sum=0,count=0;
	printf("Enter the 5 Digit number: ");
	scanf("%d",&num);
	for(i=0;i<5;i++){
		a=num%10;	
		num=num/10;
	    sum=sum+a;	
	}
	
	for(i=1;i<=sum;i++){
		if(sum%i==0){
			count=count+1;
		}
	}
	if(count==2){
		printf("%d is a prime number",sum);
	}
	else{
		printf("%d is not a prime number",sum);
	}
}
