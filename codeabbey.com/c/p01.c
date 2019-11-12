#include <stdio.h>

int main(){
  /* printf("enter number for 'a': ");
  int a = 0;
  scanf("%d", &a);

  printf("enter number for 'b': ");
  int b = 0;
  scanf("%d", &b);

  int c = (a + b);

  printf("the sum of 'a' + 'b' = %d", c); */

  int a, b = 0;

  // weird but works
  scanf("%d%d", &a, &b);

  printf("%d", a + b);

  return 0;
}
