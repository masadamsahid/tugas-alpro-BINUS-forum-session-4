//
// Created by masad on 6/10/2023.
// a simple Fizz-Buzz program
//

#include <stdio.h>
#include <stdbool.h>

int main(){
  
  int n;
  
  printf("Enter an integer number between 1 and 10000: ");
  scanf("%d", &n);
  printf("%5s | Result\n", "No.");
  
  fflush(stdin);
  
  if(n >= 1 && n <= 10000){
    bool isLooping = true;
    int i = 1;
    do {
      if(i%3 != 0) printf("%5d | Fizz\n", i);
      else printf("%5d | Buzz\n", i);
      
      i++;
      if(i > n) isLooping = false;
    } while (isLooping);
  } else {
    printf("Invalid provided number\n");
  }
  
  getchar();
  
  return 0;
}

