#include <stdio.h>
#include <conio.h>

void main() {
	int i, n, maleCount = 0, femaleCount = 0;
	float height = 0.00, totalMalesHeight = 0.00, totalFemalesHeight = 0.00;
	char gender;

	clrscr(); // Clears the screen at the start of the program

	printf("Enter number of students: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Please enter a positive number of students.\n");
		getch(); // Waits for a key press before exiting
		return;
	}

	for (i = 1; i <= n; i++) {
	height = 0;
		printf("\nEnter gender (M/F) and height (in meters) of student %d: ", i);
		fflush(stdin); // Clears the input buffer to avoid newline issues
		scanf("%c %f", &gender, &height);
		printf("heigth = %f\n", height);
		printf("gender = %c \n",gender);
		if (gender == 'm' || gender == 'M') {
			totalMalesHeight += height;
			maleCount++;
		} else if (gender == 'f' || gender == 'F') {
			totalFemalesHeight += height;
			femaleCount++;
		} else {
			printf("Invalid gender code. Please enter 'M' for male or 'F' for female.\n");
			i--; // Retry current iteration
		}


	}

	if (maleCount > 0) {
		printf("total male height = %f\n",totalMalesHeight);
		printf("total males= %d ", maleCount);
		printf("\nAverage male height: %.2f meters\n", totalMalesHeight / maleCount);
	} else {
		printf("\nNo male students in the class.\n");
	}

	if (femaleCount > 0) {
		printf("total female height = %f\n",totalFemalesHeight);
		printf("total females= %d ", femaleCount);
		printf("Average female height: %.2f meters\n", totalFemalesHeight / femaleCount);
	} else {
		printf("No female students in the class.\n");
	}

	getch(); // Waits for a key press before exiting
}
