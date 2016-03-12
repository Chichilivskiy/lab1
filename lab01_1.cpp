#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double x, y, z;
	printf("Vvedite x:");
	scanf("%lf", &x);
	printf("Vvedite y:");
	scanf("%lf", &y);
	printf("Vvedite z:");
	scanf("%lf", &z);
	
	printf("Naibilshe chislo: \n");
	
	if ((x > y) && (x > z)) {
		printf("%.0lf\n", x);
	} else {
		if ((y > x) && (y > z)){
			printf("%.0lf\n", y);
		} else {
			if ((z > x) && (z > y)){
				printf("%.0lf\n", z);
			}
		}
	}
	
	system("pause");
	return 0;
}
