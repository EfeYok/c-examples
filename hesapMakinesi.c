#include <stdio.h>

int main() {
  int islem;
  int a;
  int b;
  int c;

  printf("Hangi işlemi yapmak istiyorsun?\n1) toplama\n2) çıkarma \n3) çarpma\n4) bölme\nİşlem: ");
  scanf("%d", &islem);
  printf("İlk sayıyı girin: ");
  scanf("%d", &a);
  printf("İkinci sayıyı girin: ");
  scanf("%d", &b);

  switch (islem) {
  case 1:
    c = a + b;
    printf("Sonuç: %d", c);
    break;
  case 2:
    c = a - b;
    printf("Sonuç: %d", c);
    break;
  case 3:
    c = a * b;
    printf("Sonuç: %d", c);
    break;
  case 4:
    if (c != 0) {
      printf("Sonuç: %d", c);
      break;
    } else {
      printf("Payda sıfır olamaz.");
      break;
    }
  default:
    printf("Geçerli bir işlem girin.");
  }

  return 0;
}
