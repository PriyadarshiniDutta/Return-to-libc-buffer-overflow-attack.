/* vulnerable.c */
#include <stdio.h>

int main(int argc, char *argv[]) {
   char buffer[39];
   FILE *input = fopen("badfile", "r");
   fread(buffer, sizeof(char) , 67, input);
   printf("Read from file : %s\n", buffer);

   return 0;
}


