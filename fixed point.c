#include <stdio.h>
#include <math.h>

double f(double x)
{
	return x*x*x*x - 3 * x*x - 3;  //change equation for each problem
}

double g(double x)
{
	return pow(3 * x*x + 3, .25);
}

int main()
{
	double p, p0, Tol, root;
	int i = 1;
	int No;

	printf("Enter approximate p: ");
	scanf("%lf", &p0);

	printf("Desired Tolerance: ");
	scanf("%lf", &Tol);

	printf("Maximum Iterations: ");
	scanf("%d", &No);


	while (i <= No)
	{
		p = g(p0);

		if ((fabs(p - p0))<Tol)
		{
			root = p;
			break;
		}
		printf("Iteration %d: Current value = %lf\n  fonk deðer :\t%f", i, p, g(p));

		i++;  //i=i+1
		p0 = p;

		if (i>No)
		{
			printf("Method Failed after %d", No);
			printf(" iterations");
		}

	}
	system("PAUSE");
}