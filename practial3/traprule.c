#include <stdio.h>
#include <math.h>

int main(void)
{
	/* Declare and initalise variables */
	int N =12;
	float a = 0;
	float b = 60;

	float b_rad; // in degress 
	b_rad = (M_PI * b)/180;  // convert b to radians 
	printf("The value of b in radians is: %f\n", b_rad);

	
	float sum = tan(a) + tan(b_rad); // calculate initial sum 

	int i; 
	for (i = 0; i < 60 ; i = i + 5) // ( b - a) / N
	{
		sum += 2*tan(i*M_PI/180);
	}

	sum = (b_rad - a) / (2 *N) * sum; 

	printf("The final value of the sum is: %f\n", sum);
	printf("The actual value is %f \n", logf(2)); 

	float abs_diff = fabs(sum - logf(2));
	float rel_diff = fabs(1 - (sum/logf(2)));

	printf("The absolute difference is = %f\n and the relative difference is = %f\n", abs_diff, rel_diff);
	return 0;
}
