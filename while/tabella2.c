#include<stdio.h>
int main(){
	int a=0;
	while(a<15){
		a+=3;
		printf("%d\t%d\t%d\t%d\n", a, a+2, a+4, a+6);
	}
	return 0;
}
