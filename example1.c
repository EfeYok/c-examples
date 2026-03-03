// Girilen iki değeri toplayıp ekranda göstermek~

#include <stdio.h>

int main(){
    float a,b,topl; // Toplanacaklar (a ve b) ve sonuç (topl) değişkenleri tanımlandı.
    printf("a değeri girin:\n"); // a değeri talep metni.
    scanf("%f", &a); // Girilen a değeri adrese tanımlandı.
    printf("b değeri girin:\n"); // b değeri talep metni.
    scanf("%f", &b); // Girilen b değeri adrese tanımlandı.
    topl = a + b; // Değerler toplandı ve gösterilecek olan değişkene tanımlandı
    printf("Girdiğiniz sayıların toplamı: %.2f", topl); // Sonuç, metin içinde konsola yazıldı.

    return 0;
}
