//=======================================
//    main.c
//    Andrew Chin    Nov 28, 2019
//=======================================

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "num_conversion.h"

#define BUF_SIZE 100

int main(void) {
   int out_base = 10; // 2, 8, 10, 16
   char input[BUF_SIZE];
   char result[BUF_SIZE];

   // TODO: implement history feature for previous user input

   printf("--------------------------------------------------------\n");
   printf("         Number Base (Radix) Converter Shell\n");
   printf("--------------------------------------------------------\n");
   printf("For commands, type 'help'. Use 'quit' to exit the shell.\n");
   printf("Output base is set to %d\n", out_base);
   do {
      printf(">>> ");
      // TODO: do not rely on static allocation
      fgets(input, sizeof(input), stdin);
      input[strlen(input)-1] = '\0'; // replace '\n'
      if (strncmp(input, "help", 4) == 0) {
         printf("\nCOMMANDS:\n");
         printf("<prefix><n> - convert |n| to the current output base\n");
         printf("   prefixes: binary='0b', octal='0', decimal=none, hex='0x'\n");
         printf("help        - show this menu\n");
         printf("practice    - start an interactive practice session\n");
         printf("base        - display current output base\n");
         printf("base <n>    - set the output base to |n|\n");
         printf("quit        - exit nconvert\n");

      } else if (strncmp(input, "base", 4) == 0) {
         if (strlen(input) == 4) {
            printf("Output base is set to %d\n", out_base);
         } else {
            char* token;
            strtok(input, " ");
            token = strtok(NULL, " ");
            // TODO: check for invalid chars here
            int new_base = atoi(token);
            if (new_base == 2 || new_base == 8 || new_base == 10 || new_base == 16) {
               out_base = new_base;
               printf("Set output base to %d\n", out_base);
            } else {
               printf("Supported bases include 2, 8, 10, and 16\n");
            }
         }
         
      } else if (strncmp(input, "practice", 8) == 0) {
         // TODO:implement
         printf("TODO\n");

      } else if (strncmp(input, "quit", 4) == 0) {
         return 0;

      } else if (strncmp(input, "\0", 1) == 0) {
         // do nothing

      }else {
         if (convert(input, result, out_base) == 0) {
            printf("%s\n", result);
         } else {
            printf("Something went wrong! Try \"help\"\n");
         }
      }
   } while (strncmp(input, "quit", 4) != 0);
}
