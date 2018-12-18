#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int no)
{
   unsigned int sum = 0;

   for (unsigned int i=0; i <= no; i++) {
      sum += i * i;
   }

   return sum;
}

unsigned int square_of_sum(unsigned int no)
{
   unsigned int sum = 0;

   for (unsigned int i=0; i <= no; i++) {
      sum += i;
   }

   return (sum * sum);
}

unsigned int difference_of_squares(unsigned int no)
{
   return (square_of_sum(no) - sum_of_squares(no));
}

