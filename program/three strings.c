#include<stdio.h>
int main(){
	int i;
	char  s[3][10];
	printf("Enter three strings\n");
	for(i=0;i<3;i++){
		gets(s[i]);  
	//	gets(&s[i][0]);
	}
	for(i=0;i<3;i++){
		puts(s[i]);
	//	puts(s[i][0]);
	}
}
