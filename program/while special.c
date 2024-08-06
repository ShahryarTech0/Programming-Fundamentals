#include<stdio.h>
int main(){
	int x,i=1;
	
	while(i<=10){
		printf("Enter the number\n");
	scanf("%d",&x);
	if(x>0)
	break;
	i++;
	}
	i==11?printf("normall"):printf("non normal");
}
