#include<stdio.h>
#include<conio.h>
void main()
	{
		int num1, num2, num3;
		clrscr();
		printf("Enter three numbers :\n");
		scanf("%d %d %d", &num1, &num2, &num3);
		if(num1 > num2 && num1 > num3)
		{
			printf("First number is the greatest : %d", num1);
		}
		else if(num2 > num1 && num2 > num3)
		{
			printf("Second number is the greatest : %d", num2);
		}
		else
		{
			printf("Third number is the greatest : %d",  num3);
		}
		getch();
	}
