#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,discriminent,root1,root2;
	printf("The value of a \n");
	scanf("%f",&a);
		printf("The value of b \n");
	scanf("%f",&b);
		printf("The value of c \n");
	scanf("%f",&c);
	
	discriminent=b*b-4*a*c;
	
	if(discriminent>=0){
		root1=(-b+sqrt(discriminent))/2*a;
			root2=(-b-sqrt(discriminent))/2*a;
			printf("The Quadratic roots are real and distinct is= %f and %f ",root1,root2);
	
	}
	else if(discriminent==0){
		root1=(-b+sqrt(discriminent))/2*a;
			root2=(-b-sqrt(discriminent))/2*a;
			printf("The Quadratic roots are equal is= %f and %f ",root1,root2);
	}
	else{
		root1=(-b+sqrt(discriminent))/2*a;
			root2=(-b-sqrt(discriminent))/2*a;
			printf("The Quadratic roots are complex is= %f and %f ",root1,root2);
	}
return 0;	
}
