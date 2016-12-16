#include<stdio.h>
int main(){
  int num, a, b=0;
  do{
    printf("Inserire un numero da 1 a 20:");
    scanf("%d", &num);
    while(b<num){
      a=0;
      while(a<num){
        printf("*");
        a++;
      }
      b++;
      printf("\n");
    }
    
  }while (num<1 || num>20);
  return 0;
  }
