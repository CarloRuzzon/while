/* while3.c */

/* calcola la media dei voti inseriti
 * (si ferma quando incontra un valore sentinella)
 */

#include <stdio.h>

int main()
{
  int contatore = 0;
  int voto;
  int somma = 0;
  float media = 0;
  int sentinella = -999;

  printf("Calcola la media dei voti inseriti\n");
  printf("(%d) per fermare\n", sentinella);

  printf("Inserisci voto #%d: ", contatore+1);
  scanf("%d", &voto);
  while (voto != sentinella) {
    somma += voto;

    contatore++;

    printf("Inserisci voto #%d: ", contatore+1);
    scanf("%d", &voto);
  }

  if (contatore>0) {
    media = (float) somma / contatore;
    printf("La media dei voti e': %f\n", media);
  } else {
    printf("Nessun voto\n");
  }

  return 0;
}
