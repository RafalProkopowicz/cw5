//
// strcat
// strcat(char *dest, char *src);
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*void swap_integers(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
*/
void glue_strings(char *str1, int *str1l, char *str2, int *str2l) {
  /* code */
}

int main() {
  char t1[] = "Ala ma kota";
  char t2[] = "Kota ma prezes";
  char tab[11+14] = glue_strings(t1,11,t2,14);
}
