#include "clock.h"
#include <stdio.h>

static void normalize_clock(int *hour, int *minute)
{
   while (*minute < 0) {
      *minute += 60;
      *hour -= 1;
   }
   *hour += *minute / 60;
   while (*hour < 0) {
      *hour += 24;
   }
   *hour %= 24;
   *minute %= 60;
}

void clock(time_text_t time_text, int hour, int minute)
{
   normalize_clock(&hour, &minute);
   sprintf(time_text, "%02d:%02d", hour, minute);
}

void clock_add(time_text_t time_text, int next)
{
   int hour;
   int minute;
   sscanf(time_text, "%02d:%02d", &hour, &minute);
   minute += next;
   clock(time_text, hour, minute);
}

