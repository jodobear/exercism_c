#include "nucleotide_count.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char *count(const char *dna_strand) {
	
	bool nucleo = false;
	size_t count_a = 0;
	size_t count_c = 0;
	size_t count_g = 0;
	size_t count_t = 0;
	char *result = calloc(1, 50);

	for (size_t i=0; i < strlen(dna_strand) && (nucleo == false); i++) {
		switch (dna_strand[i]) {
			case 'A' : count_a++;
					   break;
			case 'C' : count_c++;
					   break;
			case 'G' : count_g++;
					   break;
			case 'T' : count_t++;
					   break;
			default : nucleo = true;
					  break;
		}
	}

	if (!nucleo) {
		sprintf(result, "A:%zu C:%zu G:%zu T:%zu", count_a,
				count_c, count_g, count_t);
	}
	return result;
}
