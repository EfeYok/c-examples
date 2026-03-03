// Girilen iki değerin, aracı bir değişken ile yerlerini değiştirmek~

#include <stdio.h>

int main(){
    int a,b,x; // Yer tutması gereken değişkenler ve aracı değişken tanımlandı
    printf("a değerini girin: \n"); // a değeri talep metni.
    scanf("%d", &a); // Girilen a değeri adrese tanımlandı
    printf("b değerini girin:\n"); // b değeri talep metni.
    scanf("%d", &b); // Girilen b değeri adrese tanımlandı.
    /*Değerleri şu şekilde girdiğimizi varsayalım:
    a=2, b=3*/
    x=a; // Aracı değişken, a'nın değerini tuttu.
    a=b; // a'nın yerine b yazıldı.
    b=x; // Aracı değiken, değerini b'ye aktardı
    printf("Girdiğiniz değerleri takas ettik.\na=%d, b=%d",a ,b); // Sonuç yazdırıldı.

    return 0;
}
