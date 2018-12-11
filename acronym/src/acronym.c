#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "acronym.h"

char* abbreviate (const char *phrase) {
	
	if ((phrase == NULL) || (strlen(phrase)==0))
		return NULL;

	int plen = strlen(phrase);
	char *acro = malloc(plen);
	int i = 0, j = 1;
	acro[0] = toupper(phrase[i]);
	for (i=0; i < plen; i++) {
		if ((phrase[i]==' ') || (phrase[i]=='-')) {
			acro[j] = toupper(phrase[i+1]);
			j++;
		}	
	}
	return acro;
}
