#include <stdio.h>
int main(){
int km, cont=0;
float litri=0, lkm, media, a=0;

  while (litri!=-1){
    printf("Inserire il numero di litri per un pieno: ");
    scanf("%f", &litri);
  

    if (litri!=-1){
      printf("Inserire il numero di km percorsi per un pieno: ");
      scanf("%d", &km); 
      lkm = km/litri;
      printf("Ha camminato %f km per litro\n", lkm);
      a=a+lkm;
      cont++;
   
  
}
}
media = (float)a/cont;
printf("La media totale e' %f\n", media);
return 0;
}
