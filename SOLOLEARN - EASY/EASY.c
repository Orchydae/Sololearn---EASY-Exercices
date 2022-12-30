
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void SkeeBall(int tickets, int price) {
	if (tickets > price) {
		printf("Buy it!");
	}
	else
		printf("Try again");
}

int main(void) {

	int score;
	int price;
	
	scanf("%d%d", &score, &price);
	int tickets = score / 12;
	
	SkeeBall(tickets, price);

	return EXIT_SUCCESS;
}

