// ZAD 8, 9, 10(nie działa bez dyn tablicy)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void print_table(int tab[], int b){

  //printf("WSKAZNIK %p\n", tab[0]);
  //printf(" %d\n", *tab);
  //printf(" %d\n", tab[3]);
  //printf(" %d\n", *(tab + 3));

  for (size_t i = 0; i < b; i++) {
    printf("%d\n", tab[i]);
  }
}

void reverse_table(int tab[], int b) {
  for (size_t i = b; i > 0; i--) {
    printf("%d\n", tab[i-1]);
  }
}

int *get_reverse_table(int tab[], int b) {

  int areverse[5];
  int indeks = 0;
  for (size_t i = b; i > 0; i--) {
    areverse[indeks] = tab[i-1];
    indeks++;
  }

  return areverse;
}

int main() {
  //wyswietlenie tablicy
  int a[] = {1,2,3,4,5};
  print_table(a, 5);
  //odwrocenie
  printf("\n");
  reverse_table(a,5);
  //zwrocenei tablicy
  printf("\n");
  int b[5] = get_reverse_table(a, 5);

}
