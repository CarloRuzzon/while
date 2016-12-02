#include <stdio.h>
int main(){
  float ven, sal, perc;
  int seninella=-1;
  printf("Inserire il prezzo totale degli articoli venduti (-1 per concludere): ");
  scanf("%f", &ven);
  while (ven!=-1){
    ven=ven/100.*9.;
    sal=200.+ven;
    printf("Lo stipendio sara': %.2f\n", sal);
    printf("\nInserire il prezzo totale degli articoli venduti (-1 per concludere): ");
    scanf("%f", &ven);
  }
return 0;
}
