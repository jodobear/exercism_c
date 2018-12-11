#include "pangram.h"
#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

bool is_pangram(const char *phrase) {

	if (phrase == NULL)
		return false;

	bool found[ALPHABET_SIZE] = {0};
	int unique = 0;

	for (const char *i = phrase; *i; ++i) {

		if (!isalpha(*i))
			continue;
		
		int index = tolower(*i) - 'a';

		if (!found[index]) {
			found[index] = true;
			++unique;
		}
	}
	return unique == ALPHABET_SIZE;
}
