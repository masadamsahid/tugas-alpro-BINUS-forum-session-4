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
    printf("Masukkan nilai mhs ke-%d: ", i+1);
    scanf("%f", &arrMhs[i].nilai);
    fflush(stdin);
  }
  
  for (int i = 0; i < lengthOfArrMhs; i++) {
    printf("Nama mhs ke-%d: %s\n", i+1, arrMhs[i].nama);
    printf("Nilai: %f\n", arrMhs[i].nilai);
  }
  
  int jmlMhsLulus = 0;
  int jmlMhsBlmLulus = 0;
  
  for (int i = 0; i < lengthOfArrMhs; i++) {
    if (arrMhs[i].nilai == 1) jmlMhsLulus++;
    if (arrMhs[i].nilai == 2) jmlMhsBlmLulus++;
  }
  
  printf("Jml Lulus: %d\n", jmlMhsLulus);
  printf("Jml Tidak Lulus: %d\n", jmlMhsBlmLulus);
  
  getchar();
  
  return 0;
}