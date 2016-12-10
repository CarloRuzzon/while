#include<stdio.h>
int main(){
	int n=0, c=0;
	while(c<5){
		n+=3;
		c++;
		printf("%d\t%d\t%d\t%d\n", n, n+2, n+4, n+6);
	}
	return 0;
}
