#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write the count_vowels function below so that it accepts a null terminated string and returns the number of vowels in the string*/

unsigned int count_vowels(char *str){

  int i;
  unsigned int count = 0;

  for (i = 0; i < strlen(str); i++) {

    if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' ||
        str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' ||
        str[i] == 'U' || str[i] == 'u') {

      count++;
    }
  }
  return count;
}

int main(){
  char * str;
  printf("Test cases:\n");
  str = "Hello World";
  printf("string = \"%s\"; return value = %u\n", str ,count_vowels(str));
  str = "";
  printf("string = \"%s\"; return value = %u\n", str ,count_vowels(str));
  str = "abcdefghijklmnopqrstuvwxyz";
  printf("string = \"%s\"; return value = %u\n", str ,count_vowels(str));
  str = "EduCAtion";
  printf("string = \"%s\"; return value = %u\n", str ,count_vowels(str));
  str = "The quick brown fox jumped over the lazy dog";
  printf("string = \"%s\"; return value = %u\n", str ,count_vowels(str));
 
  return 0;
}
