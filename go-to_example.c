//
// Created by masad on 6/10/2023.
//

#include <stdio.h>
#include <ctype.h>

int main(){
  
  char isBinusian;
  
  printf("Anda mahasiswa BINUS?(y/n) ");
  scanf("%s", &isBinusian);
  fflush(stdin);
  
  if(toupper(isBinusian) == 'Y') goto binusian;
  else goto nonBinusian;
  
  nonBinusian:
  printf("Anda dilarang masuk!\n");
  getchar();
  return 0;
  
  binusian:
  printf("Selamat datang di Kampus BINUS!\n");
  getchar();
  return 0;
}
