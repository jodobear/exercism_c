#include "grains.h"

#define MAX_SQ (64)

uint64_t square(uint8_t sq)
{
	if ((!sq) || (sq > MAX_SQ))
		return 0;

	return (uint64_t) 1 << (sq - 1);
}

uint64_t total(void)
{	
	uint64_t grains = 0;
	
	for (uint8_t i=1; i <= MAX_SQ; i++)
		grains += square(i);

	return grains;
}
