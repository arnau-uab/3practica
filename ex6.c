#include <stdio.h>

int main(){
	int a[4],b[4],c[4];

	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[3]=4;

	b[0]=5;
	b[1]=6;
	b[2]=7;
	b[3]=8;

	for (int i=0; i<4; i++){
		c[i] = a[i]*b[i];
	}
}
