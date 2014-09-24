#include<stdio.h>
float celsius(float c); 
int main()
{
	float far;
	float lower, upper, step;
	lower = 0;
	upper = -300;
	step = 20;
	far = lower;
	
	while (far >= upper) {
		printf("%3.0f %6.1f\n", far, celsius(far));
		far = far - step;
	}
return(0);
}
float celsius(float c)
	{
		float cls;
		cls = (5.0/9.0) * (c-32.0);
		return(cls);
	}
