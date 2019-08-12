#include <stdio.h>
#include <math.h>
#include<stdlib.h>

// Function to perform division (x / y) of two numbers x and y without 
// using division operator in the code
int divide(int x, int y)
{
	// handle divisibility by 0
	if (y == 0)
	{
		printf("Error!! Divisible by 0");
		exit(0);
	}

	// store sign of the result
	int sign = 1;
	if (x * y < 0)
		sign = -1;

	// convert both dividend and divisor to positive
	x = abs(x), y = abs(y);

	// initialize quotient by 0
	int quotient = 0;

	// loop till dividend x is more than the divisor y
	while (x >= y)
	{
	   x = x - y;		// perform reduction on dividend
	   quotient++;		// increase quotient by 1
	}

	printf("Remainder is %d\n", x);

	return sign * quotient;
}

// main function to perform division of two numbers
int main()
{
	int dividend, divisor;
	printf("Enter the dividend ");
	scanf("%d",&dividend);
	printf("Enter the divisor ");
	scanf("%d",&divisor);

	printf("Quotient is %d\n", divide(dividend, divisor));

	return 0;
}