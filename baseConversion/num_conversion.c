//=======================================
//    num_conversion.c
//    Andrew Chin    Nov 28, 2019
//=======================================

#include "num_conversion.h"

// TODO: handle negative numbers
// TODO: handle special 0 case
int convert(char* n, char* result, int out_base) {
   int in_base = detectBase(n);

   int startIndexR = 0;
   if (in_base == 2 || in_base == 16) {
      startIndexR = 2;
   } else if (in_base == 8) {
      startIndexR = 1;
   }

   if (startIndexR == strlen(n))
      return -1;

   for (int i = startIndexR; i < strlen(n); i++) {
      if ( (in_base == 16 && !isxdigit(n[i])) ||
            (in_base != 16 &&!isdigit(n[i])) )
         return -1;
   }

   if (in_base == out_base) {
      strncpy(result, n, strlen(n));
      strncpy(result+strlen(n), "\0", 1);
      return 0;
   }

   int startIndexW = 0;
   if (out_base == 2 || out_base == 16) {
      startIndexW = 2;
      result[0] = '0';
      result[1] = (out_base == 2) ? 'b' : 'x';
   } else if (out_base == 8) {
      startIndexW = 1;
      result[0] = '0';
   }

   // if base = x
   //    dec val = (digit1 * x^0) + (digit2 * x^1) + ...
   long decVal = 0;
   int digit = 0;
   for (int i = strlen(n)-1; i >= startIndexR; i--) {
      decVal += digitVal(n[i]) * pow(in_base, digit);
      digit++;
   }

   if (out_base == 10) {
      sprintf(result+startIndexW, "%ld", decVal);
      // TODO: should we zero terminate result?
      return 0;
   }

   // TODO: this is not general nor memory efficient
   char res[100];
   int index = 0;
   digit = 0;
   while (decVal > 0) {
      char c = hexVal(decVal % out_base);
      res[index] = c;
      decVal /= out_base;
      index++;
      digit++;
   }
   res[index] = '\0';
   int offset = 0;
   for (int i = strlen(res)-1; i >= 0; i--) {
      result[startIndexW+offset] = res[i];
      offset++;
   }
   result[startIndexW+offset] = '\0';

   return 0;
}

// binary   0b111
// dec      111
// octal    0111
// hex      0x111
int detectBase(char* n) {
   // TODO: possible out-of-bounds accesses here?
   if (strlen(n) > 1 && n[0] == '0') {   
         if (n[1] == 'b')
            return 2;
         else if (n[1] == 'x')
            return 16;
         return 8;
   }
   return 10;
}

// TODO: better way to do this?
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

char hexVal(int i) {
   switch (i) {
      case 0:
         return '0';
      case 1:
         return '1';
      case 2:
         return '2';
      case 3:
         return '3';
      case 4:
         return '4';
      case 5:
         return '5';  
      case 6:
         return '6';
      case 7:
         return '7';
      case 8:
         return '8';
      case 9:
         return '9';
      case 10:
         return 'a';
      case 11:
         return 'b';
      case 12:
         return 'c';
      case 13:
         return 'd';
      case 14:
         return 'e';
      case 15:
         return 'f';
      default:
         return ' ';
   }
}
