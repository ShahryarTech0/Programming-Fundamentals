#include<stdio.h>
int main(){
	int num,b,c,d,e,f,g,h,i,sum,count=0,j;
	printf("Enter the 5 digit number: ");
	scanf("%d",&num);
	if(num>9999 && num<99999){
	b=num%10;  //5
	c=num/10; //1234
	d=c%10; //4
	e=d/10; //123
	f=e%10; //3
	g=f/10; //12
	h=g%10;  //2
	i=g/10;  //1
	sum=b+d+f+h+i;
	
	for(j=1;j<=sum;j++){
		if(sum%j==0){
			count=count+1;
		}
	}
	if(count==2){
		printf("%d is prime number",sum);
	}
	else{
		printf("not");
	}
	}
}
