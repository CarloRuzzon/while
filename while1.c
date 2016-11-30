/* while1.c */

/* il ciclo while */

/* compilazione con make:
 *
 * $ make while1
 * $ ./while1
 */


#include <stdio.h>

int main()
{
  printf("Esempio di ciclo while\n");
  printf("Conto alla rovescia\n\n");

  int counter = 10;
  while (counter>0) {
    printf("counter: %d\n", counter);
    counter = counter - 1;
    /* counter -= 1 */
    /* counter-- */
  }
  printf("\n");

  printf("Dopo il ciclo, counter: %d\n", counter);

  return 0;
}
