#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Implement the reverse_words function below that accepts a string and reverses the word ordering within the string. Note that the characters within the words are not reversed. */

char *reverse_words(char *str){

   int i, index = 0, start = strlen(str) - 1, end = strlen(str) - 1;

  // allocate space to store the new string
  char *reversed_str = (char *)malloc(sizeof(char) * strlen(str));

  // loop until all words are accounted for
  while (start > 0) {

    // If a word is found
    if (str[start] == ' ') {

      // Append the word to the reverse string
      i = start + 1;
      while (i <= end) {

        reversed_str[index] = str[i];
        i++;
        index++;
      }

      reversed_str[index++] = ' ';
      end = start - 1;
    }

    start--;
  }

  // add the last word
  for (i = 0; i <= end; i++) {

    reversed_str[index] = str[i];
    index++;
  }

  // Add '\0' at the end of reverse string
  reversed_str[index] = '\0';

  return reversed_str;
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
