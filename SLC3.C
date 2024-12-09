#include<stdio.h>
#include<conio.h>
void main()
	{
		int basicPay, HRA, TA, IT, gSalary, netSalary;
		clrscr();
		printf("Enter basic pay : \t");
		scanf("%d", &basicPay);
		HRA = 10 * basicPay / 100;
		TA = 5 * basicPay / 100;
		IT = 2.5 * basicPay / 100;
		gSalary = basicPay + HRA + TA ;
		netSalary = gSalary - IT;
		printf("salary = %d", netSalary);
		getch();
	}