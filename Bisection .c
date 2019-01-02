#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) x*x*x-x-1 
#define TOL 0.001
#define NO 10



int main(){
	int i = 1;
	float a = 1, b = 1.5, p;
	float root;
	float FA = f(a), FB = f(b), FP;
	if (FA*FB > 0)
	{
		return;
	}
	printf("\n\t\t\tBISECTION METHOD");
	printf("\n\n  FINDING ROOT OF x*x*x-x-1");
	printf("\n\n  A\t  B\t  P\tf(P)\t ");
	printf("\n  -------------------------------------");


	while (i <=NO){
		p = (a + b) / 2;
		FP = f(p);
		



		printf("\n  %.3f\t%.3f\t%.3f\t%.3f\t", a, b, p, f(p));
		if (FP == 0 || (b - a) / 2 < TOL){
			root = p;
			break;
		}

		else{
			i++;
			if (FA*FP < 0) {
				b = p;
			}
			else {
				a = p;
				FA = FP;
			}
		}

	}
	
	printf("root:%d", root);

	system("PAUSE");


}