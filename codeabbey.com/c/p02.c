#include <stdio.h>

int main(){
  int amount = 38;
  int total = 0;
  int values[] = {1199, 893, 830, 1167, 998, 885, 1038, 1101, 989, 305,
  159, 446, 765, 162, 189, 1098, 1290, 398, 259, 98, 643, 420, 417, 1290, 940,
  945, 947, 470, 860, 1196, 1002, 758, 789, 532, 625, 487, 117, 362};

  for (int i = 0; i < amount; i++){
    total = values[i] + total;
  }

  printf("total: %d\n", total);

  return 0;
}
