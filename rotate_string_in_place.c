#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Implement the rotate_string_in_place function below so that it ccepts a string and a displacement and rotates each alphabetical character in the string by the given displacement to the right where disp is between 0 and 2600. Non alphabetical characters are retained without modification */

void rotate_string_in_place(char *str, unsigned int disp){
  
  int i, j;
  unsigned int displacement = disp;
  char ascii = 0;

  // initial check
  if (disp > 2600) {

    printf("illegal displacement\n");
  } else {

    // loop thru each char in the string
    for (i = 0; i < strlen(str); i++) {

      // obtain ascii value of each char
      ascii = str[i];

      // make copy of displacement to store for after if statement
      displacement = disp;
      int rotation = ascii + displacement;
      // if char is any non-alphabetical, keep it
      // i.e (ascii >= 64 || 91 <= ascii <= 94 && ascii <= 123)
      if (ascii <= 64 || ascii >= 91 && ascii <= 96 || ascii >= 123) {

        str[i] = ascii;
      } else {

        if (rotation > 90 && rotation < 96) {

          displacement = displacement - ('Z' - ascii);
          displacement = displacement % 26;
          str[i] = displacement + '@';

        } else if (rotation > 122) {

          displacement = displacement - ('z' - ascii);
          displacement = displacement % 26;
          str[i] = displacement + '`';
        }

        else {

          str[i] = rotation;
        }
        displacement = disp;
      }
    }
  }
}
int main(){
  char * str =  "gcc -c hw.c -o hw";
  char * cpy = (char *) malloc(strlen(str) + 1);
  printf("Test case:\n");
  printf("string = \"%s\"; ", str);
  strcpy(cpy, str);
  rotate_string_in_place(cpy, 2413);
  printf("Rotated(%u): \"%s\"\n", 2413, cpy);
  free(cpy);
  
  return 0;
}
