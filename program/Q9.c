#include<stdio.h>
int main(){
     char c,P,U,G,A,T;P;
     int sub,sub2,sub3,sub4;
     printf("From which country u are\n");
     scanf("%c",&c);
     P=7;
     U=4;
     G=3;
     A=3;
     T=P+U+G+A;
     sub=T-P;
     sub2=T-U;
     sub3=T-G;
     sub4=T-A;
     if(c=='P'){
     	printf("International stamps are=%d",sub);
	 }
	 else if(c=='U'){
	 	printf("International stamps are=%d",sub2);
	 }
	 else if(c=='G'){
	 	printf("International stamps are=%d",sub3);
	 }
	 else if(c=='A'){
	 	printf("International stamps are=%d",sub4);
	 }
	 else{
	 	printf("invalid");
	 }
	
}
