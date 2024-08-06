#include<stdio.h>
int main(){
	int x=2,y;
	y=!x<4; //the result becomes 1 means true because !x and x=2 and 2 is true means 1 now !1<4 is again true ..every non zero number is true
	printf("%d",y);
}
