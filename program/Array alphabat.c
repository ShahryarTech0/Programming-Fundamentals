#include<stdio.h>
int main(){
	char a[10];
	int i,count=0,sum=0;
	for(i=0;i<10;i++){
		printf("Enter the alphabat: ");
		scanf(" %c",&a[i]);
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
			count=count+1;}
		else{
			sum=sum+1;}
	                  }
	printf("Vowels is = %d\n",count);
	printf("Consonants is = %d\n",sum);
	
}
