// Girilen değeri konsolda göstermek~

#include <stdio.h>

int main() {
    int a; // a değişkeni tanımlandı.
    printf("Tam sayı girin:\n"); // Değer talep metni.
    scanf("%d", &a); // Girilen değeri "a" adresine tanımladı.
    printf("Girdiğiniz tam sayı: %d", a); // "a" değerini çekti ve metinde gösterdi.

    return 0;
}
