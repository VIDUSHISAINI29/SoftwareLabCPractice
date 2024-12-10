#include <stdio.h>
#include<conio.h>

void main() {
	int i, n, maleCount = 0, femaleCount = 0;
	float height , totalMalesHeight = 0.00, totalFemalesHeight = 0.00;
	char gender;
	printf("Enter number of students: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Please enter a positive number of students.\n");
		getch(); 
		return;
	}

	for (i = 1; i <= n; i++) {
		printf("\nEnter gender (M/F) and height (in meters) of student %d: ", i);
		scanf(" %c %f", &gender, &height);
		// printf("heigth = %f\n", height);
		// printf("gender = %c \n",gender);
		 if (gender == 'm' || gender == 'M') {
            totalMalesHeight += height;
            maleCount++;
        } else if (gender == 'f' || gender == 'F') {
            totalFemalesHeight += height;
            femaleCount++;
        } else {
            printf("Invalid gender entered for student %d. fill again\n");
			i--;
        }
		

	}

	if (maleCount > 0) {
		// printf("total male height = %f\n",totalMalesHeight);
		
		printf("\nAverage male height: %.2f meters\n", totalMalesHeight / maleCount);
	} else {
		printf("\nNo male students in the class.\n");
	}

	if (femaleCount > 0) {
		// printf("total female height = %f\n",totalFemalesHeight);
		
		printf("Average female height: %.2f meters\n", totalFemalesHeight / femaleCount);
	} else {
		printf("No female students in the class.\n");
	}

}
