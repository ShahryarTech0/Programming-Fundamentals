#include<stdio.h>
int main(){
	int marks;
	printf("enter the marks");
	scanf("%d",&
	marks);
	
	if(marks>=90){
		printf("grate is A");
	}
	else if(marks>=80){
		printf("grate is B");
	}
	else if(marks>=80){
		printf("grate is C");
	}
	else if(marks>=70){
		printf("grate is D");
	}
	else{
		printf("fail");
	}
}
