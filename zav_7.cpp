#include <stdio.h> 
#include <stdlib.h> 


int main(int argc, char *argv[]) {
	int a; 
	printf("Vvedite god:"); 
 	scanf("%d", &a); 
 	if(a%400==0){
 		printf("Danuy god ne vicokostnuy", a);
 	}else{
 		if(a%100==0){
 		printf ("Danuy god ne visokostnuy",a);
 		} else{
 			if(a%4==0){
 				printf ("Danuy god vicokostnuy",a);
 			}else{
 				printf ("Danuy god ne vicokostnuy",a);
 			}
		}
	}
	return 0;
}
