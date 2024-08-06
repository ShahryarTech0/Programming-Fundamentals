#include<stdio.h>
void swap(int*,int*);
int main(){
	//POINTER SWAP IN FUNCTION
	int a,b;
	printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a=%d \n b=%d",a,b);
}

void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
