#include<stdio.h>
int main(){
  float capitale, interesse, tasso; 
  int giorni, sentinella=-1;

  printf("Inserire -1 per terminare\n");
  printf("\nInserire il capitale:");
  scanf("%f", &capitale);
  while(capitale!=sentinella){
    printf("Inserire il tasso d'interesse:");
    scanf("%f", &tasso);
    printf("Inserire la durata del prestito in giorni:");
    scanf("%d", &giorni);
    interesse= capitale * tasso * giorni / 365;
    printf("L'interesse e' cambiato in: €%.2f\n", interesse);
    printf("\nL'inserire -1 per terminare\n");
    printf("\nInserire il capitale:");
    scanf("%f", &capitale);
  }
return 0;
}
