#include <iostream>
#include <cstdio>
#include <math.h>
float f;
float a;
float b;
float c;
float fi;
float o;
float omega;
float M_PI;


float main() {
	printf("vvedit a \n");
	scanf_s("%f", &a);
	printf("vvedit b \n");
	scanf_s("%f", &b);
	printf("vvedit c \n");
	scanf_s("%f", &c);
	printf("vvedit φ \n");
	scanf_s("%f", &fi);
	printf("vvedit ω \n");
	scanf_s("%f", &omega);
	printf("vvedit θ \n");
	scanf_s("%f", &o);
	M_PI = 3.14;
	f = pow(a * c + 8 * c. / b., 1. /5.) - 1 / tan(a * fi - o) - 45 * M_PI - 7. / omega.;
	printf("f= %f \n", f);
	return 0;
}
