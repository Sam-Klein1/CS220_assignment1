#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write the count_vowels function below so that it accepts a null terminated string and returns the number of vowels in the string*/

unsigned int count_vowels(char *str){


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
