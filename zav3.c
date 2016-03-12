#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	float x, y;
	double n;
	printf ("Vvedite x :\n");
	scanf ("%f", &x);
	printf ("Vvedite n :\n");
	scanf ("%f", &n);
	y = x * x + 3 * n; 
	printf ("y=%f", y,x);
	return 0;
}
