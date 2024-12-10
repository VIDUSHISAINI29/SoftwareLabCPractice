#include<stdio.h>
#include<conio.h>
int main()
	{
		int arr1[2][3], arr2[3][2], resultArr[2][2] = {0};
		int i, j, k = 0;
		
		for(i = 0; i < 2; i++)
		{
			for(j = 0; j < 3; j++)
			{
				printf("Enter %d_%d element for array 1 (2 * 3) : ", i + 1, j + 1);
				scanf("%d", &arr1[i][j]);
			}
		}
		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 2; j++)
			{
				printf("Enter %d_%d element for array 2 (3 * 2) : ", i + 1, j + 1);
				scanf("%d", &arr2[i][j]);
			}
		}
		for (i = 0; i < 2; i++)
		{
			for(j = 0; j < 2; j++)
				{
						resultArr[i][j] = 0;
					for(k = 0; k < 3; k++)
					{
						resultArr[i][j] += arr1[i][k] * arr2[k][j];
					}
				}
		}
		for(i = 0; i < 2; i++)
				{
					for(j = 0; j < 2; j++)
					{
						
						printf(" %d_%d  element of resultant array is : %d \n", i + 1, j + 1, resultArr[i][j]);
					}
				}

		return 0;
	}