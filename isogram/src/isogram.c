#include "isogram.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool is_isogram(const char *phrase) {
	if (phrase == NULL)
		return false;

	size_t len = strlen(phrase), i=0, j=0;
	for (i=0; i+1 < len; i++)
		for (j=i+1; j < len; j++)
			if (isalpha(phrase[i]))
				if (tolower(phrase[i]) == tolower(phrase[j]))
					return false;
	return true;
}
