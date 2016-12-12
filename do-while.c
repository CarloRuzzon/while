/* do-while.c */

/* Il ciclo do-while */

/* Istruzioni di compilazione:
 *
 * $ make CFLAGS="-Wall -ansi -pedantic" do-while
 * $ ./do-while
 */

#include <stdio.h>

int main()
{
  /* esempio di utilizzo del ciclo do-while
   * per ottenere un input controllato
   */

  int num;

  /* chiede all'utente di inserire
   * un numero compreso da 0 e 9,
   * richiede se non valido
   */
  do {
    printf("Inserisci un numero compreso tra 0 e 9: ");
    scanf("%d", &num);
  } while (num<0 || num >9);

  printf("Hai inserito il numero %d\n", num);

  return 0;
}
