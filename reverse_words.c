#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Implement the reverse_words function below that accepts a string and reverses the word ordering within the string. Note that the characters within the words are not reversed. */

char *reverse_words(char *str){

  

}

int main(){
  char * str;
  printf("Test cases:\n");
  str = "Hello World";
  printf("string = \"%s\"; return value = \"%s\"\n", str, reverse_words(str));
  str = "";
  printf("string = \"%s\"; return value = \"%s\"\n", str, reverse_words(str));
  str = "HeyYou";
  printf("string = \"%s\"; return value = \"%s\"\n", str, reverse_words(str));
  str = "What is the question?";
  printf("string = \"%s\"; return value = \"%s\"\n", str, reverse_words(str));
  str = "It is what it is.";
  printf("string = \"%s\"; return value = \"%s\"\n", str, reverse_words(str)); 

  return 0;
}
