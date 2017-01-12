#include<stdio.h>
int main(){
  int counter=1;
  int number, largest;
  printf("Inserire il numero di articoli venduti del %d venditore:", counter);
  scanf("%d", &largest);
  while(counter<10){
     counter++;
     printf("Inserire il numero di articoli venduti del %d venditore:", counter);
     scanf("%d", &number);
     if (number>largest){
       largest=number;
     }
  }
  printf("Il maggior numero di articoli sono: %d\n", largest);
return 0;
}
          
          
     
