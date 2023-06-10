//
// Created by masad on 6/10/2023.
//

#include <stdio.h>

struct Mahasiswa {
  char nama[127];
  float nilai;
};

int main(){
  
  struct Mahasiswa arrMhs[100];
  int lengthOfArrMhs = sizeof(arrMhs)/sizeof(arrMhs[0]);
  
  for (int i = 0; i < lengthOfArrMhs; i++) {
    printf("Masukkan nama mhs ke-%d: ", i+1);
    scanf("%[^\n]s", arrMhs[i].nama);
    printf("\n");
    fflush(stdin);
  }
  
  for (int i = 0; i < lengthOfArrMhs; i++) {
    printf("Nama mhs ke-%d: %s\n", i+1, arrMhs[i].nama);
  }
  
  printf("%d\n", lengthOfArrMhs);
  
  getchar();
  
  return 0;
}