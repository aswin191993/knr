#include<stdio.h>

main()
{
	float far, celsius;
	float lower, upper, step;
	lower = 0;
	upper = -300;
	step = 20;
	far = lower;
	while (far >= upper) {
		celsius = (5.0/9.0) * (far-32.0);
		printf("%3.0f %6.1f\n", far, celsius);
		far = far - step;
}
}
