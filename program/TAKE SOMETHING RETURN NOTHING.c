#include<stdio.h>
//TAKE SOMETHING RETURN NOTHING
void add(int,int);         //declaration of take something return nothing
int main(){
	int x,y;
	printf("Enter the two numbers\n");
	scanf("%d %d",&x,&y);
	add(x,y); //call the value        actual argument
}





void/*(return nothing)*/ add(int a,int b)/*take something*/
{
	int c;  //formal argument
	c=a+b;
	printf("The sum of two numbers are=%d",c);
}
