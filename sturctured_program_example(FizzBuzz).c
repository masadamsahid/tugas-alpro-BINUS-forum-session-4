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
    
    for (int i=1; i<=n; i++) {
      if(i%3 != 0) printf("%5d | Fizz\n", i);
      else printf("%5d | Buzz\n", i);
    }
    
  } else {
    printf("Invalid provided number\n");
  }
  
  getchar();
  
  return 0;
}

