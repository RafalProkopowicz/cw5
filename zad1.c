#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int silnia(int a){
  int b = 1;
  int i;
  for (i = 1; i <= a; i++) {
    b = b * i;
  }
  return b;
}

int main() {
  int i;
  for (i = 1; i <= 12; i++) {
    printf("%d\n", silnia(i));
  }
}
