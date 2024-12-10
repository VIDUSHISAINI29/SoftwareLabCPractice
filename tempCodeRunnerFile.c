ent %d. fill again\n", i--);
        }
		

	}

	if (maleCount > 0) {
		printf("total male height = %f\n",totalMalesHeight);
		
		printf("\nAverage male height: %.2f meters\n", totalMalesHeight / maleCount);
	} else {
		printf("\nNo male students in the class.\n");
	}

	if (femaleCount > 0) {
		printf("total female height = %f\n",totalFemalesHeight);
		
		printf("Average female height: %.2f meters\n", totalFemalesHeight / femaleCount);
	} else {
		printf("No female students in the class.\n");