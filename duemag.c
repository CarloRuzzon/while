#include<stdio.h>
int main(){
	int n, m1, m2=0, c=1;
	printf("Inserire i numeri:");                    scanf("%d", &n);
	m1=n;
	while(c<10){
		printf("Inserire i numeri:");                    scanf("%d", &n);
		c++;
		if (n>=m1 && n>=m2){
			m2=m1;
			m1=n;


		}
	}
	printf("I numeri maggiori sono: %d e %d\n", m1, m2);

	return 0;
	}


