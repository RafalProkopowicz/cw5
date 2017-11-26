//ZAD 3,4
//nie działa do poprawy

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int cyfry(int liczba){
  int b=1;
  while(liczba=liczba/10){
    b++;
  }
  return b;
}

int main() {
  int liczba = 0, wartosc = 0;

  printf("podaj liczbe do konwersji na [10]\n");
  scanf("%d", &liczba);

  //na 2
  int tab[cyfry(liczba)];

  for (size_t i = 0; i < cyfry(liczba); i++) {
    /* code */
  }

  for (size_t i = cyfry(liczba); i > 0; i--) {
    wartosc = wartosc + (tab[i]*2);
  }
  printf("%d", wartosc);

}
