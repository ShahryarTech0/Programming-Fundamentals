#include<stdio.h>
int main(){
	int bs;
	float hra,da,gs;
	printf("enter the value of bs");
	scanf("%d",&bs);
	
	if(bs<1500){
		hra=(bs*10)/100;
		da=(bs*90)/100;
		gs=(bs+hra+da);
		printf("the value of gs=%f",gs);
	}
	else{
		hra=500;
		da=(bs*98)/100;
		gs=(bs+hra+da);
		printf("the value of gs is=%f",gs);
	}
	return 0;
}
