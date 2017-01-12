#include<stdio.h>
int main(){
  int a=0, b=0, c, num;
  do{
    printf("Inserire il numero: ");
    scanf("%d", &num);
  }while(num>20 || num<1);
  while(a<num){
    printf("*");
    a++;
  }
  printf("\n");
  while(b<num-2){
    printf("*");
    b++;
    c=0;
    while (c<num-2){
      printf(" ");
      c++;
    }
    printf("*\n");
  }
  a=0;
  while(num>1 && a<num){
    printf("*");
    a++;
   }
  printf("\n");
  return 0;
}





