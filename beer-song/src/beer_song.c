#include "beer_song.h"
#include <stdio.h>
#include <string.h>

static unsigned int words(char *response, unsigned int verse_no)
{
   unsigned int output = 0;

   if (verse_no == 0) {
      output =
          sprintf(response,
                  "No more bottles of beer on the wall, no more bottles of beer.\n"
                  "Go to the store and buy some more, 99 bottles of beer on the wall.\n");
   }
   else if (verse_no == 1) {
      output =
          sprintf(response,
                  "1 bottle of beer on the wall, 1 bottle of beer.\n"
                  "Take it down and pass it around, no more bottles of beer on the wall.\n");
   }
   else if (verse_no == 2) {
      output =
          sprintf(response,
                  "2 bottles of beer on the wall, 2 bottles of beer.\n"
                  "Take one down and pass it around, 1 bottle of beer on the wall.\n");
   }
   else if (verse_no <= 99) {
      output =
          sprintf(response,
                  "%u bottles of beer on the wall, %u bottles of beer.\n"
                  "Take one down and pass it around, %u bottles of beer on the wall.\n",
                  verse_no, verse_no, verse_no-1);
   }

   return output;
}

void verse(char *response, unsigned int verse_no)
{
   (void)words(response, verse_no);
}

void sing(char *response, unsigned int start,
          unsigned int end)
{
   char *position = response;

   for (unsigned int i = start+1; i > end;
        i--) {
      position += words(position, i - 1);
      strcpy(position, "\n");
      position++;
   }

   strcpy(position-1, "\0");
}

