#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write the print_any_base function below so it returns the string representation of a base 10 number converted to the given base where the symbols of the base are 0 through 9 followed by A through Z */

char* print_any_base(unsigned long num, unsigned int base) {

char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char temp;
  long n;
  long rem = 0;
  long quotient = num;
  int i = 0, j, k = 0;

  // allocate char array
  char *str = (char *)malloc(sizeof(char) * 16);
  memset(str, '\0', 16);

  // 2 <= base <= 36
  if (base < 2 || base > 36) {

    strcpy(str, "illegal base");
    return str;

  }
  // edge case
  else if (num == 0) {

    str[0] = '0';
  } else {

    // algorithm for converting to any base

    while (quotient != 0) {

      rem = quotient % base;      // get remainder
      char symbol = symbols[rem]; // remainder number = symbol used
      quotient = quotient / base; // get new quotient

      str[i] = symbol;
      i++;
    }
  }

  // loop to reverse string using email from instructor
  j = strlen(str) - 1;
  while (k < j) {
    temp = str[j];
    str[j] = str[k];
    str[k] = temp;
    k++;
    j--;
  }
  return str;

  
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
