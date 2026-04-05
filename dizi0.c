// Dizide sayı arama~

#include <stdio.h>

int main() {
  int a[] = {1, 4, 9, 16, 25, 25, 36}; // dizi tanımlandı.
  
  int c = (sizeof(a))/(sizeof(a[0])); // Dizi eleman sayısı bulundu (ilk dersten bir satır)

  int search;
  printf("Aramak istediğiniz sayıyı girin:");
  scanf("%d", &search); // Aramak istenilen sayıyı, kullanıcıdan alnıdı.

  for(int i=0; i<c; i++){
    if(a[i] == search){
      printf("Aradığınız sayı bu dizide mevcut."); 
      break;
    }
  } // for döngüsüyle dizideki bütün elemanları aranılan sayı ile karşılaştırıldı.

  /* "break" bloğu sayesinde tekrarlanan değerler birden fazla çıktı yaratmayacak.
  Mesela 25 sayısını bulduğu an dizinin devamına bakmayı bırakıp direkt çıktı verecektir.*/

  printf("");

  return 0;
}
