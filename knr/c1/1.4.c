#include<stdio.h>

main()
{
	float far, celsius;
	float lower, upper, step;
	lower = -17;
	upper = 111;
	step = 11;
	celsius = lower;
	while (celsius <= upper) {
		far = (((celsius*9)/5)+32);
		far=far-1.4;
		printf("%6f %3f\n",celsius, far);
		celsius =celsius + step;
}
}
