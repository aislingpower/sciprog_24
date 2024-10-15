#include <stdio.h>
#include <math.h>

#define N 12
/* Define global variable*/
float TanArr[N+1]; 

/* Define functions */
float degtorad(float degarg); 
float traprule();

/* Begin main prog */
int main(void)
{
	/* Declare and initalise variables */
	float a = 0.0;
	float b = 60.0; 
	float deg; 
	int i; 

	for (i = 0; i < N ; i++) 
	{
		deg = i*5.0; // ( b - a) / N
		/* Convert degrees to radians, take tan of result and store in TanArr[] for each i */
		TanArr[i] = tan(degtorad(deg));   
		printf("TanArr[%d] = %f\n", i, TanArr[i]);
	}

	/* Call trap function*/
	float area = traprule();

	/* Aprox result (Trap Rule) */
	printf("\nTrapezoidal result is: %f\n", area);
	/* Actual Result (Integral of tan is ln(2)) */
	printf("Real result is: %f\n", log(2.0));

	return 0;
}


/* Function to convert degrees to radians */
float degtorad(float degarg){
   float pi = 3.1415927;
   return( (pi* degarg)/ 180.0);
}

/* Function to compute trapezoidal rule */
float traprule(){
	float area; 
	int i; 

	area = TanArr[0] - TanArr[N];
        printf("The inital area (sum at x(0) and x(12)) = %f\n", area);

        for(i = 1; i<N; i++){
           area = area + 2*TanArr[i];
        }
        printf("The value of the sum after the loop is: %f\n", area);
        //Multiply area by (pi/3)/2(12) after converting it to radian
        float mult_rad = degtorad((60.0)/(2*N));
        area = mult_rad*area;

	return area;

}

