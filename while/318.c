#include<stdio.h>
int main(){
int conto=0, sentinella=-1;
float saldoi, articoli, crediti, limite, bilancio;

printf("inserire il numero del conto(-1 per terminare): ");
scanf("%d", &conto);
while (conto!=sentinella){
  printf("Inserire inserire il saldo iniziale:");
  scanf("%f", &saldoi);
  printf("Inserire il totale degli articoli messi messi in conto:");
  scanf("%f", &articoli);
  printf("Inserire il totale di tutti i credeti applicati a questo conto:");
  scanf("%f", &crediti);
  printf ("Inserire il limite di credito concesso:");
  scanf("%f", &limite);
  bilancio=saldoi+articoli-crediti;
  if (bilancio>limite){
    printf("Account: %d\n", conto);
    printf("Credito massimo: %.2f\n", limite);
    printf("Bilancio: %.2f\n", bilancio);
    printf("Il credito massimo e' stato superato.\n");
  }
printf("\nInserire il numero del conto(-1 per terminare): ");
scanf("%d", &conto);
}

return 0;
}
