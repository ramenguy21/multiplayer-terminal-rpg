#include <stdint.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void process_command(const char *cmd) {
   if(strcmp(cmd, "quit") == 0) {
      printf("Cya l8r, allig8r \n");
      exit(0);
   } else if (strcmp(cmd, "mv") == 0) {
      printf("Moving! \n");
   }
}

int main() {
   
   char input[256];
   
   printf("Welcome to the Game !\n");
   printf("Type help to see a list of available commands");

   while (1) {
      printf("\n> ");
      if(fgets(input, sizeof(input), stdin) == NULL) {
         break;
      }

      //removes new line character from the input
      input[strcspn(input, "\n")] = '\0';

      process_command(input);
   
   }

   return 0;

}
