#include<stdio.h>
#include<conio.h>
void main()
	{
		int i, n, num, largest;
		clrscr();
		printf("How many numbers you want to input : \t");
		scanf("%d", &n);
		if(i <= 0)
		{
			printf("\nPlease enter a positive number.");
		}
		printf("\nEnter number 1 : \t");
		scanf("%d", &largest);
		for(i = 2; i <= n; i++)
		{
			printf("Enter number %d : \t",i);
			scanf("%d", &num);

			if(num > largest)
			{
				largest = num;
			}
		}
		printf("Largest number is : %d",largest);
		getch();
	}
