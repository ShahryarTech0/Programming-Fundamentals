#include<stdio.h>
//TAKE NOTHING RETURN SOMETHING
int add(void); // declaration of take nothing return something
int main(){
	int s;
	s=add();
	printf("The sum of two numbers is =%d",s);
}






int/*return something int(integer type if return is char wo include char)*/add()/*these empty parathesis shows takenothing*/
{
	int a,b,c;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	return(c);
}
