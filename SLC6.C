// # Multiplication of matrices

// #include<stdio.h>
// int main()
// 	{
// 		int arr1[2][3], arr2[3][2], resultArr[2][2] = {0};
// 		int i, j, k = 0;
		
// 		for(i = 0; i < 2; i++)
// 		{
// 			for(j = 0; j < 3; j++)
// 			{
// 				printf("Enter %d_%d element for array 1 (2 * 3) : ", i + 1, j + 1);
// 				scanf("%d", &arr1[i][j]);
// 			}
// 		}
// 		for(i = 0; i < 3; i++)
// 		{
// 			for(j = 0; j < 2; j++)
// 			{
// 				printf("Enter %d_%d element for array 2 (3 * 2) : ", i + 1, j + 1);
// 				scanf("%d", &arr2[i][j]);
// 			}
// 		}
// 		for (i = 0; i < 2; i++)
// 		{
// 			for(j = 0; j < 2; j++)
// 				{
// 						resultArr[i][j] = 0;
// 					for(k = 0; k < 3; k++)
// 					{
// 						resultArr[i][j] += arr1[i][k] * arr2[k][j];
// 					}
// 				}
// 		}
// 		for(i = 0; i < 2; i++)
// 				{
// 					for(j = 0; j < 2; j++)
// 					{
						
// 						printf(" %d_%d  element of resultant array is : %d \n", i + 1, j + 1, resultArr[i][j]);
// 					}
// 				}

// 		return 0;
// 	}

// # Multiplication of matrices

#include<stdio.h>
#define N 50

void main(){
	int row1, row2, col1, col2, matrix1[N], matrix2[N], i, j, k, resultantMatrix;
	printf("Enter number of rows and coloumns of matrix 1 : ");
	scanf("%d %d \n", &row1, &col1);
	for ( i = 0; i < row1; i++)
	{
		for ( j = 0; j < col1; j++)
		{
			printf("Enter %d_%d element of matrix 1 : \t", i, j);
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("Enter number of rows and coloumns of matrix 2 : ");
	scanf("%d %d \n", &row2, &col2);
	for ( i = 0; i < row2; i++)
	{
		for ( j = 0; j < col2; j++)
		{
			printf("Enter %d_%d element of matrix 2 : \t", i, j);
			scanf("%d", &matrix2[i][j]);
		}
	}
	if(col1 != row2){
		printf("cannot multiply")
	}
	
}