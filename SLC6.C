#include<stdio.h>
#include<conio.h>
void main()
	{
		int arr1[5] = {2, 3, 4, 5, 6}, arr2[5] =  {2, 3, 4, 5, 6}, resultArr[5], i, j, k;
		clrscr();
		for(i = 0; i < 5; i++)
		{
			resultArr[i] = arr1[i] * arr2[i];
			 printf("In resulted array element at %d is %d\n", i, resultArr[i]);
		}

		getch();
	}