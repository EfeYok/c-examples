// Alt alta 5 Yıldız~

#include <stdio.h>

int main() {
  int y = 5; // y değişkeni tanımlandı.
  for (int i = y; i >= 1; i--) {
    for (int e = y; e >= i; e--) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
