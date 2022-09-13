#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void paritize(void *p, unsigned int num_bytes) {


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
