#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int podnies_do_kwadratu_int(int n) {
  n = n*n;
  return(n);
}


void podnies_do_kwadratu(int *n) {
  *n = *n * *n;
}

void wczytaj_liczbe(int *n) {
  printf("Wpisz liczbę naturalną: ");
  scanf("%d", n);
}

int main() {
  int liczba;
  wczytaj_liczbe(&liczba);
  podnies_do_kwadratu(&liczba);
  printf("Kwadrat wczytanej liczby to %d\n", liczba);

  printf("%d\n",podnies_do_kwadratu_int(liczba));
  return 0;
}
