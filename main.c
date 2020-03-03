#include <stdio.h>

int main(void) {
  int num =1;
  if (*(char *)&num == 1 ){
    printf("it is littel endian\n");
  }
 else if (*(char*)&num == 0) {
   printf(" big endian");
 }


  return 0;
}