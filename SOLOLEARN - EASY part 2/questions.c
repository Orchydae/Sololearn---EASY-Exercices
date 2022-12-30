#define _CRT_SECURE_NO_WARNINGS

#include "questions.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Paintcosts() {
	double canvas_brushes_price = 40;
	double paint_color = 5;
	double number_color;
	double cost;

	// INPUT: number of colors that you want.
	scanf("%lf", &number_color);

	// OUTPUT: cost of purchase rounded up with TAXES
	cost = (((number_color * paint_color) + canvas_brushes_price) * TAX);
	printf("%.0lf", cost);
}

void Argentina() {
	const double PESOS_TO_CENTS = 0.02;
	int price_pesos;
	int price_dollars;
	int price_after_conversion;

	// INPUT: Pesos then Dollars
	scanf("%d", &price_pesos);
	scanf("%d", &price_dollars);

	price_after_conversion = price_pesos * PESOS_TO_CENTS;

	if (price_after_conversion <= price_dollars) {
		printf("Pesos");
	}
	else {
		printf("Dollars");
	}

}

void Balconies() {

	char apartment_A[10];
	fgets(apartment_A, 10, stdin);
	char apartment_B[10];
	fgets(apartment_B, 10, stdin);
	int tab_A[2];
	int tab_B[2];
	int i = 0, j = 0;
	int aire_A;
	int aire_B;

	char* token_A = strtok(apartment_A, ",");
	while (token_A != NULL) {
		tab_A[i] = atoi(token_A);
		//printf("%d\n", tab_A[i]);
		i++;
		token_A = strtok(NULL, ","); // "We're not passing you new string, just continue giving us new token of that string
	}

	char* token_B = strtok(apartment_B, ",");
	while (token_B != NULL) {
		tab_B[j] = atoi(token_B);
		//printf("%d\n", tab_B[j]);
		j++;
		token_B = strtok(NULL, ",");
	}

	aire_A = tab_A[0] * tab_A[1];
	aire_B = tab_B[0] * tab_B[1];

	if (aire_A >= aire_B)
		printf("Apartment A");
	else
		printf("Apartment B");

}

void Candles() {

	int candles_per_friend = 9;
	int friends;
	int me = 1;

	scanf("%d", &friends);
	printf("%d", (friends + me) * candles_per_friend);
}

void Duct_Tape() {
	const int FOOT_TO_INCHES = 12;
	int feet_duct_long = 60;
	int inches_duct_wide = 2;
	int two_sided_door = 2;
	int feet_height_door;
	int feet_width_door;
	double feet_surface_totale_porte;
	double feet_aire_duct;
	double nb_rolls_necessaire;

	scanf("%d", &feet_height_door);
	scanf("%d", &feet_width_door);

	feet_surface_totale_porte = feet_height_door * feet_width_door * two_sided_door;
	feet_aire_duct = (double)feet_duct_long * ((double)inches_duct_wide / (double)FOOT_TO_INCHES);

	nb_rolls_necessaire = ceil(feet_surface_totale_porte / feet_aire_duct);

	printf("%.0lf", nb_rolls_necessaire);

}

void Easter_Eggs() {
	int total_number_eggs;
	int my_eggs;
	int friends_eggs;
	int our_eggs;

	scanf("%d", &total_number_eggs);
	scanf("%d", &my_eggs);
	scanf("%d", &friends_eggs);

	our_eggs = my_eggs + friends_eggs;

	if (our_eggs < total_number_eggs)
		printf("Keep Hunting");
	else
		printf("Candy Time");
}

void Guard_Flamingos() {

	int length_yard;
	int width_yard;
	int perimetre_yard;
	double nb_flamingos;
	int distance_flamingos = 2;

	scanf("%d", &length_yard);
	scanf("%d", &width_yard);

	perimetre_yard = (length_yard * 2) + (width_yard * 2);
	nb_flamingos = (double)perimetre_yard / (double)distance_flamingos;

	printf("%.0lf", nb_flamingos);

}

void Gotham_City() {
	int number_criminals;
	int less_five = 5;
	int more_ten = 10;

	scanf("%d", &number_criminals);

	if (number_criminals < less_five)
		printf("I got this!");
	else if (number_criminals > more_ten)
		printf("Good Luck out there!");
	else
		printf("Help me Batman");
}

void Hovercrafts() {
	int nb_hovercrafts_month = 10;
	int nb_sales;
	int price_to_make = 2000000;
	int selling_price = 3000000;
	int insurance_price = 1000000;
	int monthly_expenses;
	int profit;

	scanf("%d", &nb_sales);

	monthly_expenses = (nb_hovercrafts_month * price_to_make) + insurance_price;
	profit = nb_sales * selling_price;

	if (profit > monthly_expenses)
		printf("Profit");
	else if (profit < monthly_expenses)
		printf("Loss");
	else
		printf("Broke Even");

}

void Izzy_the_Iguana() {
	int break_even_snack_points = 10;
	int lettuce_points = 5;
	int carrot_points = 4;
	int mango_points = 9;
	int points_totaux = 0;
	char snacks_in_hand[100];

	gets_s(snacks_in_hand, 100);

	char* snack_token = strtok(snacks_in_hand, " ");
	while (snack_token != NULL) {
		//printf("%s ", snack_token);

		if (strcmp(snack_token, "Lettuce") == 0) {
			points_totaux += lettuce_points;
		}
		else if (strcmp(snack_token, "Carrot") == 0) {
			points_totaux += carrot_points;
		}
		else if (strcmp(snack_token, "Mango") == 0) {
			points_totaux += mango_points;
		}

		snack_token = strtok(NULL, " ");
	}

	if (points_totaux < break_even_snack_points)
		printf("Time to wait");
	else
		printf("Come on Down!");

}

void Kaleidoscope() {
	const double discount = 0.9;
	double prix_kaleidoscope = 5;
	double prix_total;
	int nb_purchase;

	scanf("%d", &nb_purchase);

	if (nb_purchase > 1) {
		prix_total = TAX_KALEIDOSCOPES * discount * prix_kaleidoscope * nb_purchase;
	}
	else {
		prix_total = TAX_KALEIDOSCOPES * prix_kaleidoscope * nb_purchase;
	}
	printf("%.2lf", prix_total);

}

void Jungle_Camping() {
	char Lions[] = "Grr";
	char Tigers[] = "Rawr";
	char Snakes[] = "Ssss";
	char Birds[] = "Chirp";
	char bruit_jungle[100];
	char animaux_jungle[100] = "";

	gets_s(bruit_jungle, 100);

	char* bruit_token = strtok(bruit_jungle, " ");
	while (bruit_token != NULL) {
		//printf("%s\n", bruit_token);
		if (strcmp(bruit_token, Lions) == 0)
			strcat(animaux_jungle, "Lions ");
		else if (strcmp(bruit_token, Tigers) == 0)
			strcat(animaux_jungle, "Tigers ");
		else if (strcmp(bruit_token, Snakes) == 0)
			strcat(animaux_jungle, "Snakes ");
		else if (strcmp(bruit_token, Birds) == 0)
			strcat(animaux_jungle, "Birds ");
		bruit_token = strtok(NULL, " ");
	}
	printf("%s\n", animaux_jungle);
}

void Land_Ho() {

	int max_people_boat = 20;
	int me = 1;
	int trip_time_minutes = 10;
	int nb_people_ahead;
	int back_forth = 2;
	int waiting_time_turn = trip_time_minutes * back_forth;
	int waiting_turn;
	int total_waiting_time;

	scanf("%d", &nb_people_ahead);

	waiting_turn = (nb_people_ahead + me) / max_people_boat;

	if ((nb_people_ahead + me) % max_people_boat == 0) {
		waiting_turn -= 1;
		total_waiting_time = (waiting_turn * waiting_time_turn) + trip_time_minutes;
	}
	else
		total_waiting_time = (waiting_turn * waiting_time_turn) + trip_time_minutes;

	printf("%d", total_waiting_time);
}

void Neverland() {

	int age_beginning;
	int years_passed;

	scanf("%d", &age_beginning);
	scanf("%d", &years_passed);

	printf("My twin is %d years old and they are %d years older than me", (age_beginning + years_passed), years_passed);

}

void Extra_Terrestrials() {

	char input_string[100];
	int i;

	scanf("%s", &input_string);

	for (i = strlen(input_string) - 1; i >= 0; i--) {
		printf("%c", input_string[i]);
	}
}

void Zipcode() {
	char zip_code[100];

	scanf("%s", &zip_code);

	if ((zipcode_validation(zip_code)) > 0)
		printf("true");
	else
		printf("false");

}

int zipcode_validation(char* zipcode) {
	int true = 1;
	int false = 0;
	int i;
	int max_length = 5;

	for (i = 0; i < strlen(zipcode); i++) {

		if (zipcode[i] < 48 || zipcode[i] > 57)
			return false;
	}
	if (strlen(zipcode) == max_length)
		return true;
	else
		return false;

}

void Vowel_Counter() {
	char string_input[100];
	int i, j;
	char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0' };
	int vowel_counter = 0;

	fgets(string_input, 100, stdin);

	for (i = 0; i < strlen(string_input); i++) {
		for (j = 0; j < strlen(vowels); j++) {

			if (string_input[i] == vowels[j]) {
				vowel_counter++;
			}
		}
	}
	printf("%d", vowel_counter);
}

void Isogram_Detector() {
	char string_input[100];
	int string_to_int[1];
	int i, j;
	int repeated_letter;
	int is_not_Isogram = 0;

	scanf("%s", &string_input);

	for (i = 0; i < strlen(string_input) && is_not_Isogram != 1; i++) {
		repeated_letter = 0;
		string_to_int[0] = string_input[i];

		for (j = 0; j < strlen(string_input) && is_not_Isogram != 1; j++) {
			if (string_to_int[0] == string_input[j]) {
				repeated_letter++;
			}
			if (repeated_letter > 1)
				is_not_Isogram = 1;
		}

	}

	if (is_not_Isogram == 1) {
		printf("false");
	}
	else
		printf("true");
}

void Multiple() {

	int integer_number;
	int i;
	int sum_3_5 = 0;
	scanf("%d", &integer_number);

	for (i = 0; i < integer_number; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum_3_5 += i;
	}

	printf("%d", sum_3_5);
}

void Number_of_Ones() {
	int input_integer;
	int i;
	int result;
	int count_one = 0;
	scanf("%d", &input_integer);

	for (result = input_integer; result > 0; result /= 2) {
		if (result % 2 == 1)
			count_one++;
	}

	printf("%d", count_one);

}