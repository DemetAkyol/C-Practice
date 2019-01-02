#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) x*x*x-x-1 
#define fd(x) 3*x*x-1
#define E 0.001
#define MAX_COUNT 10
#define g(x) sqrt(x+6)
#define gd(a0) (0.5/sqrt(a0+6))
#define MAX_COUNT 10
void Bisection_Method() {
	system("CLS");
	float x1 = 1, x2 = 1.5, x0;
	float f1 = f(x1), f2 = f(x2), f0;
	float root;

	if (f1*f2 > 0) {
		return;
	}

	printf("\n\t\t\tBISECTION METHOD");
	printf("\n\n  FINDING ROOT OF x*x*x-x-1");
	printf("\n\n  X1\t  X2\t  X0\tf(X0)\t ");
	printf("\n  -------------------------------------");
back:
	x0 = (x1 + x2) / 2;
	f0 = f(x0);
	printf("\n  %.3f\t%.3f\t%.3f\t%.3f\t", x1, x2, x0, f(x0));
	//print in tabular form
	if (f1*f0 < 0) {
		x2 = x0;
	}
	else {
		x1 = x0;
		f1 = f0;
	}

	if (fabs((x2 - x1) / x2) < E) {
		root = (x1 + x2) / 2;
		printf("\n______________________________________________\n");
		printf("\n\n Approximate Root = %.5f", root);
		return;
	}
	else {
		goto back;
	}


}

void Newton_Raphson() {

	float x0, x1, f0, fd0, e;

	printf("\n\t\t\tNewton Raphson");
	printf("\n\n FINDING ROOT OF x*x*x-x-1");

	printf("\n Enter the initial value: ");
	scanf("%f", &x0);

	printf("\n f(x0)\t\tfd(x0)\t\tx1\t\t");
	printf("\n  -------------------------------------");

begin:
	f0 = f(x0);
	fd0 = fd(x0);
	x1 = x0 - (f0 / fd0);
	e = fabs((x1 - x0) / x1);

	if (e < E) {
		printf("\n  -------------------------------------");
		printf("\n\n Approximate Root = %.5f", x1);
	}
	else {
		printf("\n %.2f\t\t%.3f\t\t%.3f\t\t", f(x0), fd(x0), x1);
		x0 = x1;
		goto begin;
	}


}
void Secant_Method() {
	printf("\n\t\t\tSecant Method");
	float x1 = 1, x2 = 1.5, x3, f1, f2, t;
	printf("\n  -------------------------------------");
	printf("\n    x1\t  x2\t  x3\t     f(x1)\t f(x2)");
	printf("\n  -------------------------------------");
	do {
		f1 = f(x1);
		f2 = f(x2);
		x3 = x2 - ((f2*(x2 - x1)) / (f2 - f1));
		printf("\n%f   %f   %f   %f   %f", x1, x2, x3, f1, f2);
		x1 = x2;
		x2 = x3;
		if (f2 < 0)
			t = fabs(f2);
		else
			t = f2;
	} while (t > E);

	printf("\n______________________________________________\n");
	printf("\n\n Approximate Root = %f", x3);

}

void Fixed_Point_Method()
{
	printf("\n\t\t\tFixed Point Method");
	int count = 0;
	float x0 = 0, x1 = 0, error = 0;
	char iffound = 0;
	printf("\nPlease enter the initial value: ");
	scanf("%f", &x0);
	do {
		x1 = g(x0);
		error = fabs(x1 - x0);
		if (count == 0)
		{
			if (gd(x0) > 1) {
				printf("\nThe equation is not convergent");
				iffound = 1;
				break;
			}
			else {
				printf("\n   i    xi      f(xi)          ");
				printf("\n-------------------------------------------");
			}
		}
		printf("\n %3d  %3.5f    %3.5f  ", count, x0, f(x0));
		x0 = x1;
		count++;
	} while (error > 0.0005 && count < MAX_COUNT);

	if (!iffound)
	{
		printf("\n______________________________________________\n");
		printf("\nThe required root is: %f\n", x0);
	}
}
void Regula_Falsi_Metod()
{
	printf("\n\t\t\tRegula Falsi Metod");
	int itr = 0, maxitr;
	float x1, x2, x3, x4, aerr;
	printf("\nEnter value of x0 = 1, x1 = 1.5, allowed error=0.001,maximum iteration=10\n");
	x1 = 1.0f;
	x2 = 1.5f;
	aerr = 0.001f;
	maxitr = 10;
	x3 = ((x1*f(x2)) - (x2*f(x1))) / (f(x2) - f(x1));
	printf("\n %d \t%f\t%f\t%f", itr + 1, x3, x2, x1);
	do
	{
		if (f(x1)*f(x3) < 0)
			x2 = x3;
		else
			x1 = x3;
		x4 = x3;
		x3 = ((x1*f(x2)) - (x2*f(x1))) / (f(x2) - f(x1));
		itr++;
		printf("\n %d \t%f\t%f\t%f", itr + 1, x3, x2, x1);
		if (fabs(x4 - x3) < aerr)
		{
			printf("\n\nAfter %d iteration, Root= %f", itr, x4);
			getch();
			return 0;
		}
	} while (itr < maxitr);
	printf("\n\nSolution does not converge Iteration not sufficient");
}
main()
{
	Bisection_Method();
	puts("\n");
	Newton_Raphson();
	puts("\n");
	Secant_Method();
	puts("\n");
	Fixed_Point_Method();
	puts("\n");
	Regula_Falsi_Metod();
	getch();
}