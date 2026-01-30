#include <stdio.h>

int avg(int x, int y) {
  // insert code to calculate average here
  int av = (x + y) / 2;

  return av;
}

int main() {
  int a = 10;
  int b = 20;
  int c = avg(a, b);
  printf("average of %d and %d is %d\n", a, b, c);
  return 0;
}
