/*
	// ===POPSICLES - E1===
	int n_siblings;
	scanf("%d", &n_siblings);
	int n_popsicles;
	scanf("%d", &n_popsicles);
	Popsicles(n_siblings, n_popsicles);

	// ===HALLOWEEN CANDY - E2===
	int n_houses;
	scanf("%d", &n_houses);
	HalloweenCandy(n_houses);

	// ===FRUIT BOWL - E3===
	int n_fruits;
	scanf("%d", &n_fruits);
	FruitBowl(n_fruits);

	// ***===***BALLPARK ORDERS - E4 ***===***
	char food_order[50];
	fgets(food_order, 50, stdin);

	printf("%.2lf", BallparkOrders(food_order));

	// ===CHEER CREATOR===
			int nb_yard;
	scanf("%d", &nb_yard);

	CheerCreator(nb_yard);

	*/

void Popsicles(int number_siblings, int number_popsicles) {
	if (number_popsicles % number_siblings == 0) {
		printf("give away");
	}
	else {
		printf("eat them yourself");
	}
}
void HalloweenCandy(int number_houses) {
	const double DOLLARBILLS_HOUSES = 2;
	const int PERCENT = 100;
	double percentage_dollarbills_houses = (DOLLARBILLS_HOUSES / number_houses) * PERCENT;
	printf("%.0lf", ceil(percentage_dollarbills_houses));
}
void FruitBowl(int number_fruits) {
	int number_apples = number_fruits / 2;
	int number_pies = number_apples / 3;
	printf("%d", number_pies);

}
double BallparkOrders(char food_order[]) {
	const double TAX = 1.07;
	int price = 0;

	char* order_part = strtok(food_order, " ");
	//printf("%s\n", order_part);
	while (order_part != NULL) {
		printf("%s\n", order_part);
		if (strcmp(order_part, "Pizza") == 0) {
			price += 6;
		}
		else if (strcmp(order_part, "Nachos") == 0) {
			price += 6;
		}
		else if (strcmp(order_part, "Cheeseburger") == 0) {
			price += 10;
		}
		else if (strcmp(order_part, "Water") == 0) {
			price += 4;
		}
		else {
			price += 5;
		}
		order_part = strtok(NULL, " ");
	}

	double total_price = price * TAX;
	return total_price;
}
void CheerCreator(int nbyard) {
	const char RA_STR[] = "Ra!";
	int i; // counter
	if (nbyard < 1)
		printf("shh");
	else if (nbyard < 10) {
		for (i = 1; i <= nbyard; i++) {
			printf("%s", RA_STR);
		}
	}
	else
		printf("High Five");
}