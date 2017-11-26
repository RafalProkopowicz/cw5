#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void swap_integers(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a,b;
  printf("daj 2 liczby\n");
  scanf("%d %d", &a, &b);
  swap_integers(&a,&b);
  printf("%d %d\n", a , b);
}
