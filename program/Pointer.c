#include<stdio.h>
int main(){
	// REFERENCE MEANS POINTER
	
/*	int x=5,*p;
	p=&x;
	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%u\n",p);
	*/
	
/*	int x=5,*j;
	j=&x;
	printf("%d\n",j,x);
	printf("%u %d\n",*j,&x);
	printf("%u\n",*&j);
*/


int x=5,*p,**q,***r;
p=&x;
q=&p;
r=&q;
**q=7;   // *q means p and therefore **q means x
***r=9;  //this shows the x
//p=p+1;   // formuala==pointer+sizeof(typeof data)*n            
printf("%d\n",x);
printf("%u\n",p);
printf("%u\n",q);
printf("%u\n",r);	
}
