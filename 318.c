#include<stdio.h>
int main(){
int conto=0, sentinella=-1;
float saldoi, articoli, crediti, limite, bilancio;
while (conto!=sentinella){
printf("inserire il numero del conto(-1 per terminare): ");
scanf("%d", &conto);
if (conto!=sentinella){
  printf("Inserire inserire il saldo iniziale:");
  scanf("%f", &saldoi);
  printf("Inserire il totale degli articoli messi messi in conto:");
  scanf("%f", &articoli);
  printf("Inserire il totale di tutti i credeti applicati a questo conto:");
  scanf("%f", &crediti);
  printf ("Inserire il limite di credito concesso:");
  scanf("%f", &limite);
  printf( "Account: %d\n", conto);
  printf("Credito massimo: %f\n", limite);
  bilancio=saldoi+articoli-crediti;
  if (bilancio>limite)
    printf("IL credito massimo e' stato superato, il nuovo bilancio sara': %f\n\n", bilancio);
   
}
}
return 0;
}
