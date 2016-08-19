#include <stdio.h>
void k(void){
int x,y;
static int z=0;
x=2;
*(&x+2)-=31;
z++;
	if(z>1){
		*(&x+2)-=45;
	}
}
int main(void){
int x,y=0;
x=0;
printf("selam %d\n",y++);
k();
x=1;
printf("x=%d\n",x);
}

