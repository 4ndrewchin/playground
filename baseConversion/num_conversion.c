//=======================================
//    num_conversion.c
//    Andrew Chin    Nov 26, 2019
//=======================================

#include "num_conversion.h"

int convert(char* n, char* result, int out_base) {
   for (int i = 0; i < strlen(n); i++) {
      if (!isxdigit(n[i]))
         return -1;
   }

   int in_base = detectBase(n);

   if (in_base == out_base) {
      strncpy(result, n, strlen(n));
      return 0;
   }

   int startIndex = 0;
   if (in_base == 2 || in_base == 16) {
      startIndex = 2;
      result[0] = '0';
      result[1] = (in_base == 2) ? 'b' : 'x';
   }
   else if (in_base == 8) {
      startIndex = 1;
      result[0] = '0';
   }
   

   // if base = x
   //    dec val = (digit1 * x^0) + (digit2 * x^1) + ...
   long decVal = 0;
   for (int i = strlen(n)-1; i >= startIndex; i--) {
      int digit = strlen(n) - 1;
      decVal += digitVal(n[i]) * pow(in_base, digit-1);
   }

   sprintf(result+startIndex, "%l", decVal);

   return 0;
}

// binary   0b111
// dec      111
// octal    0111
// hex      0x111
int detectBase(char* n) {
   if (strlen(n) >= 2 && n[0] == '0') {   
      //if (n[0] == '0') {
         if (n[1] == 'b')
            return 2;
         else if (n[1] == 'x')
            return 16;
         return 8;
      //}
   }
   return 10;
}

int digitVal(char c) {
   switch (c) {
      case '0':
         return 0;
      case '1':
         return 1;
      case '2':
         return 2;
      case '3':
         return 3;
      case '4':
         return 4;
      case '5':
         return 5;  
      case '6':
         return 6;
      case '7':
         return 7;
      case '8':
         return 8;
      case '9':
         return 9;
      case 'a':
      case 'A':
         return 10;
      case 'b':
      case 'B':
         return 11;
      case 'c':
      case 'C':
         return 12;
      case 'd':
      case 'D':
         return 13;
      case 'e':
      case 'E':
         return 14;
      case 'f':
      case 'F':
         return 15;
      default:
         return -1;
   }
}
