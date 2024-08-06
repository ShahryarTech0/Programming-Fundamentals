#include<stdio.h>
//TAKE SOMETHING RETURN NOTHING
int add(int,int); //CALLED THE GLOBAL DECLARATION
int main(){
	int x,y,s;
	printf("Enter two numbers\n");
	scanf("%d %d",&x,&y);
	
	s=add(x,y); 
	
	printf("The sum of two numbers are=%d",s);
}



int add(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}
