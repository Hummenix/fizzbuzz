#include <stdio.h>

void main() {

  int start = 0, end = 100;
  for(; start <= end; start++) {
    if(start%3 == 0) {
      printf("Fizz");
      if(start%5 == 0) {
        printf("Buzz\n");
      }
      else {
        printf("\n");
      }
    }
    else if(start%5 == 0) {
      printf("Buzz\n");
    }
    else {
      printf("%i\n", start);
    }

  }

}
