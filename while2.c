/* while2.c */

/* calcola la media dei voti inseriti
 * (ipotizza 5 voti)
 */

#include <stdio.h>

int main()
{
  int numero_voti = 5;
  int contatore = 0;
  int voto;
  int somma = 0;
  float media = 0;

  printf("Calcola la media di %d voti\n\n", numero_voti);

  while (contatore<numero_voti) {
    printf("Inserisci voto #%d: ", contatore+1);
    scanf("%d", &voto);

    somma += voto;

    contatore++;
  }

  media = (float) somma / numero_voti;

  printf("La media dei voti e': %f\n", media);

  return 0;
}
