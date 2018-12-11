#include "hamming.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

int compute(const char *left, const char *right) {

	int count = -1;
	if (left && right && (strlen(left) == strlen(right))) {
		count = 0;
		int len = (int)strlen(left);
		for (int i=0; i<len; ++i) {
			if (left[i] != right[i]) {
				++count;
			}
		}
	}
	return count;
}

