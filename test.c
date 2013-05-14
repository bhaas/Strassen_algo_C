#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n = 2;
	const double e = log(7)/log(2);
	double r;
	do {
		r = -2 * pow(n,3) + pow(n,e) + 5 * pow(n,2) - 6;
		n++;
	} while (r > 0);
	printf("for n = %d, r = %f\n", n - 1, r);
	return(0);
}

