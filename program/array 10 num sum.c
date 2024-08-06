#include<stdio.h>
//AVERAGE OF ANY 10 NUMBERS 
int main(){
	int a[10],i,sum=0,j;
	float avg;
	printf("Enter the any 10 numbers\n");
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++){
	sum=sum+a[i];
	}
	avg=sum/10;
		printf("Average is %f",avg);
}

