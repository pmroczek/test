#include <stdio.h>
/*herpe test*/
int main() {
  int n[1000], i=0;
  //komentarz1
  while(n[i] != -1) {
    i++;
    printf("Podaj %i liczbe: ", i);
    scanf("%i", &n[i]);
  }
  printf("========================\n");
  /* To bylem ja - piotlr */
  for(i=i-1; i>0; i--) {
    printf("%i \n", n[i]);
  }


  /*  dopisał mroczek :D  */ 
  return 1;
}
