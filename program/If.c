#include<stdio.h>
int main(){
	int m1,m2,m3,m4,m5,per;
	printf("enter the marks of first subject");
	scanf("%d",&m1);
	printf("enter the marks of second subject");
	scanf("%d",&m2);
		printf("enter the marks of third subject");
	scanf("%d",&m3);
		printf("enter the marks of forth subject");
	scanf("%d",&m4);
		printf("enter the marks of fifth subject");
	scanf("%d",&m5);
	
	per=(m1+m2+m3+m4+m5)/5;
	
	if(per>=60){
		printf("first division%d",m1);}
		
		if((per>=50)&&(per<60)){
		printf("second division%d",m2);}
		
		if((per>=40)&&(per<50)){
		printf("third division%d",m3);}
		
		if(per<40){
		printf("fail");}
		
		return 0;
	
}
