#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write the function swap_bytes below that accepts an 8-byte integer, swaps bytes 1 and 2, 3 and 4, 5 and 6, and 7 and 8 and returns the result */

unsigned long swap_bytes(unsigned long n){

  int i;
  char temp;
  unsigned char *char_arr = (unsigned char *) &n;

  for (i=0; i<strlen((const char *) char_arr); i+=2){
    
    temp = char_arr[i];
    char_arr[i] = char_arr[i+1];
    char_arr[i+1] = temp;

  }

  return n;
  

}

int main(){
  unsigned long n1 = 0x12345678deadbeef;
  unsigned long n2 = 0;
  unsigned long n3 = 1;
  unsigned long n4 = 0x12345;

  printf("n = %lx; return value = %lx\n", n1, swap_bytes(n1)); 
  printf("n = %lx; return value = %lx\n", n2, swap_bytes(n2)); 
  printf("n = %lx; return value = %lx\n", n3, swap_bytes(n3)); 
  printf("n = %lx; return value = %lx\n", n4, swap_bytes(n4)); 


  
}
