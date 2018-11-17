#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const* argv[]) {
	char input[20];
	char * pch;
	float total;
	float totalcostPer;
	int people;
	float *costPer;

	printf("How many people are there?\n");
	fgets(input, 20, stdin);
	people = atoi(input);
	costPer = malloc(people * sizeof(float));

	printf("Total cost: ");
	fgets(input, 20, stdin);
	total = atoi(input);

	for (int i = 1; i <= people; i++) {
		printf("Cost for person %d: ", i);
		fgets(input, 20, stdin);
		pch = strtok (input," ");
		totalcostPer = 0;

		 while (pch != NULL)
	   {
			 totalcostPer += atof(pch);
	     pch = strtok (NULL," ");
	   }
		costPer[i - 1] = totalcostPer;
		total -= totalcostPer;
	}

	for (int i = 1; i <= people; i++) {
		printf("Total for person %d: %.2f\n", i, total / people + costPer[i - 1]);
	}

	return 0;
}
