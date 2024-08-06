#include<stdio.h>
int main(){
	int x,y,z;
	x=3%4; //becaues if we % small number into big then remainder is small number
	y=11/4; //the result becomes 2 because int can't show the decimal points 
	z=3.0/4; //the result become 0 because int can't show the decimal values
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
}
