#include <stdio.h>
int main(){
int km, cont=0, sentinella=-1;
float litri=0, lkm, media, a=0;

printf("Inserire (%d) per terminare\n", sentinella);
printf("Inserire il numero di litri per un pieno: ");
scanf("%f", &litri);

while (litri!=sentinella){
  printf("Inserire il numero di km percorsi per un pieno: ");
  scanf("%d", &km);
  lkm = km/litri;
  printf("Ha camminato %f km per litro\n", lkm);
  a=a+lkm;
  cont++;
  printf("Inserire il numero di litri per un pieno: ");
  scanf("%f", &litri);
  }

if (cont>0){
  media = (float)a/cont;
  printf("La media totale e' %f\n", media);
}
else{
printf("Nessun km percorso\n");
}
return 0;
}

