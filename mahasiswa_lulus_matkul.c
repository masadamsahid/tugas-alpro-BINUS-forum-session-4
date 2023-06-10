//
// Created by masad on 6/10/2023.
//

#include <stdio.h>

struct Mahasiswa {
  char nama[127];
  int statusKelulusan;
};

int main(){
  
  struct Mahasiswa arrMhs[100];
  int lengthOfArrMhs = sizeof(arrMhs)/sizeof(arrMhs[0]);
  
  for (int i = 0; i < lengthOfArrMhs; i++) {
    printf("Masukkan nama mhs ke-%d: ", i+1);
    scanf("%[^\n]s", arrMhs[i].nama);
    printf("Masukkan statusKelulusan mhs ke-%d: ", i+1);
    scanf("%d", &arrMhs[i].statusKelulusan);
    fflush(stdin);
  }
  
  for (int i = 0; i < lengthOfArrMhs; i++) {
    printf("Nama mhs ke-%d: %s\n", i+1, arrMhs[i].nama);
    printf("Nilai: %d\n", arrMhs[i].statusKelulusan);
  }
  
  int jmlMhsLulus = 0;
  int jmlMhsBlmLulus = 0;
  
  for (int i = 0; i < lengthOfArrMhs; i++) {
    if (arrMhs[i].statusKelulusan == 1) jmlMhsLulus++;
    if (arrMhs[i].statusKelulusan == 2) jmlMhsBlmLulus++;
  }
  
  printf("Jml Lulus: %d\n", jmlMhsLulus);
  printf("Jml Tidak Lulus: %d\n", jmlMhsBlmLulus);
  printf("Total Mhs: %d\n", lengthOfArrMhs);
  
  float persentaseKelulusan = (float)jmlMhsLulus/(float)lengthOfArrMhs;
  
  printf("%f\n", persentaseKelulusan);
  
  // Syarat terpenuhi adalah LEBIH DARI  80 persen, bukan LEBIH DARI SAMA DENGAN 80 persen
  if (persentaseKelulusan > .8) printf("Kelulusan kelas telah mencapai target!\n");
  
  getchar();
  
  return 0;
}