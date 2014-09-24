#include<stdio.h>

main()
{
	float far, celsius;
	float lower, upper, step;
	upper =0;
	step = 20;
	for (far=300;far >= upper;far=far-step) {
		celsius = (5.0/9.0) * (far-32.0);
		printf("%3.0f %6.1f\n", far, celsius);
}
}
