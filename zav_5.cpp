#include <stdio.h> 
#include <stdlib.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 

int main(int argc, char *argv[])
{ 
    int n; 
	printf("Skol'ko vam let?\t"); 
	scanf("%d", &n); 
	if (n>=101) { 
		printf ("Not correct enter(0-101).Try againt\n");
	} else {
		if((n%10==1)){ 
			printf("god\n"); 
		} else { 
			if((n%10==2)||(n%10==3)||(n%10==4)){ 
				printf("goda\n"); 
				} else { 
					if((n%10==0)||(n%10==5)){ 
						printf("let\n"); 
						if((n%10>=6)&&(n%10<=9)){
						printf("Vam let",n);
					} 
				} 
		}
	}
	system("pause"); 
	return 0; 
}
}

