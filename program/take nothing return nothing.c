#include<stdio.h>
void add(void);  //function declaration
int main(){
	add();  //function call
}
 void add()  //function identification
{
	int a,b,c;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("The sum of two number is=%d  ",c);
}
