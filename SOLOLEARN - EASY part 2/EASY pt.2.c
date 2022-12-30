#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//#include "questions.h"


int main(void) {
	int i;
	int nb_rice_krispies;

	for (i = 0; i < 6; i++) {
		scanf("%d", &nb_rice_krispies);
		
		if (nb_rice_krispies % 3 == 0) {
			printf("Pop");
		}
		else if (nb_rice_krispies % 3 != 0 && nb_rice_krispies %2 != 0) {
			printf("Snap");
		} else
			printf("Crackle");
	}

	return EXIT_SUCCESS;
}