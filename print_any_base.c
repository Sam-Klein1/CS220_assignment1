#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write the print_any_base function below so it returns the string representation of a base 10 number converted to the given base where the symbols of the base are 0 through 9 followed by A through Z */

char* print_any_base(unsigned long num, unsigned int base) {



  
}

int main(){
  printf("Test cases:\n");
  printf("num = %u base = %u Output = %s\n", 1234, 2, print_any_base(1234,2));
  printf("num = %u base = %u Output = %s\n", 1234, 3, print_any_base(1234,3));
  printf("num = %u base = %u Output = %s\n", 1234, 16, print_any_base(1234,16));
  printf("num = %u base = %u Output = %s\n", 1234, 36, print_any_base(1234,36));
  printf("num = %u base = %u Output = %s\n", 12345678, 23, print_any_base(12345678,23));
  printf("num = %u base = %u Output = %s\n", 0, 25, print_any_base(0,23));
  printf("num = %u base = %u Output = %s\n", 100, 44, print_any_base(100,44));
  return 0;
}
