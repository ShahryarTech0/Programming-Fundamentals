#include<stdio.h>
int main(){
/*	int a[10],i,sum=0;
	float avg;
	printf("Enter the ten numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		sum=sum+a[i];
	}
	avg=sum/10;
	printf("%f",avg);
}  */


	 //ADDITION O THREE BY THREE MATRIX
 
  int A[3][3],B[3][3],C[3][3],i,j;
   printf("Enter the 9 numbers for first matrix\n");
   for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		scanf("%d",&A[i][j]);
	}
 }
 printf("Enter the 9 numbers for second matrix\n");
 for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		scanf("%d",&B[i][j]);
	}
}

for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		C[i][j]=A[i][j]+B[i][j];
		printf("%d ",C[i][j]);
	
	}
	
	printf("\n");
}

}
