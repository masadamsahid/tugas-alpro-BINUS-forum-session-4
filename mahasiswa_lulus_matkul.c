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
    printf("Masukkan status kelulusan (1=Lulus, 2=Tidak Lulus): ");
    scanf("%d", &arrMhs[i].statusKelulusan);
    fflush(stdin);
  }
  
  printf("\n=======================================================================================\n\n");
  
  printf("%8s | %-32s | %s\n", "No. Urut", "Nama Mahasiswa", "Status Kelulusan");
  for (int i = 0; i < lengthOfArrMhs; i++) {
    /*printf("Nama mhs ke-%d: %s\n", i+1, arrMhs[i].nama);
    printf("Nilai: %d\n", arrMhs[i].statusKelulusan);*/
    printf("%8d | %-32s | %s\n", i+1, arrMhs[i].nama, arrMhs[i].statusKelulusan == 1 ? "PASS" : "FAILED");
  }
  
  printf("\n=======================================================================================\n");
  
  int jmlMhsLulus = 0;
  int jmlMhsBlmLulus = 0;
  
  for (int i = 0; i < lengthOfArrMhs; i++) {
    if (arrMhs[i].statusKelulusan == 1) jmlMhsLulus++;
    if (arrMhs[i].statusKelulusan == 2) jmlMhsBlmLulus++;
  }
  
  printf("%-21s: %8d\n", "Jml Lulus", jmlMhsLulus);
  printf("%-21s: %8d\n", "Jml Tidak Lulus", jmlMhsBlmLulus);
  printf("%-21s: %8d\n\n", "Total Mhs", lengthOfArrMhs);
  
  float persentaseKelulusan = (float)jmlMhsLulus/(float)lengthOfArrMhs;
  
  printf("%-21s: %7.2f%%", "Persentase kelulusan", persentaseKelulusan*100);
  
  printf("\n=======================================================================================\n\n");
  
  // Syarat terpenuhi adalah LEBIH DARI 80, bukan LEBIH DARI SAMA DENGAN 80
  if (jmlMhsLulus > 80) printf("Kelulusan kelas telah mencapai target!\n");
  
  getchar();
  
  return 0;
}