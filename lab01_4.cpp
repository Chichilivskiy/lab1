#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int t;
	printf("Kotra goduna?:");
	scanf("%d", &t);
	if ((t >= 6) && (t <= 12)){
		printf("Dobrogo ranky\n");
 } else {
		if ((t >= 13) && (t <= 18)) {
			printf("Dobrogo dnya\n");
 } else {
			if ((t >= 18) && (t <= 24)){
				printf("Dobrogo vechora\n");
 } else {
				if ((t >= 0) && (t <= 6)) {
					printf("Nadobranich\n");
				}
			}
		}
	}
	system("pause");
	return 0;
}
