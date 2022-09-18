#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void paritize(void *p, unsigned int num_bytes) {

  int i, j;
  char *byte_arr = p;

  for(j = 0; j<num_bytes-1; j++){
    
    int count = 0, mask = 1;
    for (i = 0; i<7; i++){
      
      if (byte_arr[j] & mask){
    
        count++;
      }
      mask = mask << 1;
    }
    //count is even 
    if(count % 2 == 0){

      byte_arr[j] = byte_arr[j] & 0x7f;
    
    }
    //count is odd
    if(count % 2 == 1){

      byte_arr[j] = byte_arr[j] | 0x80;
    }
  }
}

int main(){
  unsigned int x = 0xdeadbeef;
  unsigned long y = 0x12345678deadc0de;
  printf("Test cases:\n");
  printf("byte-array = %x num_bytes = %lu ", x, sizeof(x));
  paritize(&x, 4);
  printf("result = %x\n", x);
  printf("byte-array = %lx num_bytes = %lu ", y, sizeof(y));
  paritize(&y, 8);
  printf("result = %lx\n", y);
  
  return 0;
}
