#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main () {
  int ref[] = {8, 4, 0, 2, 5, 6, 6, 7, 8, 3};
  int *wsk;
  int indeks;
  for (indeks = 0, wsk = ref; indeks < 10; indeks++, wsk++)
  printf("%d %d\n", ref[indeks], *wsk);
  return 0;
}
