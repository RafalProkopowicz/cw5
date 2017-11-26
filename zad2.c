#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


//0 -> nie jest
//1 -> jest
int doskonala(int a){
  int suma_dzielnikow = 0;

  for (int i = 1; i <= (a/2); i++) {
    if ((a % i) == 0){
       suma_dzielnikow += i;
    }
  }

  if (suma_dzielnikow == a) {
    return 1;
  } else {
    return 0;
  }
}


int main() {
  int a = 0, doskonala_count = 0;
  printf("podaj liczbe\n");
  scanf("%d", &a);

//czy liczba jest doskonała
  if (doskonala(a) == 1) {
    printf("ta liczba jest doskonała\n");
  } else {
    printf("ta liczba nie jest doskonała\n");
  }

//ile jest liczb doskonałych do tej liczby
  for (size_t i = 1; i < a; i++) {

    if (doskonala(i) == 1) {
      doskonala_count += 1;
    }
  }
  printf("do tej liczby jest %d liczb doskonałych\n", doskonala_count);
  doskonala_count = 0;

//ile jest liczb doskonałych do 10000
  for (size_t i = 1; i <= 10000; i++) {

    if (doskonala(i) == 1) {
      doskonala_count += 1;
    }
  }
  printf("do liczby 10000 jest %d liczb doskonałych\n", doskonala_count);
}
