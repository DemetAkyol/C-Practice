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