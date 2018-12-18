#include <stdio.h>
#include <string.h>
#include "raindrops.h"

char *convert(char result[], int drops)
{
   if (drops % 3 == 0) {
      strcat(result, "Pling");
   }
   if (drops % 5 == 0) {
      strcat(result, "Plang");
   }
   if (drops % 7 == 0) {
      strcat(result, "Plong");
   }
   if (strlen(result) == 0) {
      char output[12] = "\0";
      sprintf(output, "%d", drops);
      strcat(result, output);
   }
   return result;
}

