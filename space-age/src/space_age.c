#include "space_age.h"
#include <stdio.h>

const int EARTH_YEAR = 31557600;

double orbital_mult(enum planets planet) {

	switch(planet) {
		case EARTH  : return 1.0;
		case MERCURY: return 0.240867;
		case VENUS	: return 0.61519726;
		case MARS	: return 1.8808158;
		case JUPITER: return 11.862615;
		case SATURN : return 29.447498;
		case URANUS : return 84.016846;
		case NEPTUNE: return 164.79132;
	}
	return -1;
}

double convert_planet_age(enum planets planet, long long int sec) {

	double age_years = orbital_mult(planet) * EARTH_YEAR;
	return sec / age_years;
}
