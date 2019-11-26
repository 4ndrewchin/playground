//=======================================
//    main.c
//    Andrew Chin    Nov 26, 2019
//=======================================

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "num_conversion.h"

int main(void) {
   char input[100] = "4";
   int desired_base = 2;
   char output[100];
   if (convert(input, output, desired_base) != 0) {
      printf("ERROR\n\r");
   } else {
      printf("%s to base %d: %s\n\r", input, desired_base, output);
   }
}
