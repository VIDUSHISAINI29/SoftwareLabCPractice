#include<stdio.h>
#include<math.h>
int main(){
    int rows, i, j, k;
    printf("Enter Number of Rows : ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++){
        for(j = 1; j <= (rows - i) ; j++){
            printf(" ");
        }
        for(k = 1; k <= (i * 2 - 1) ; k++){
            printf("%d", i);
        }
        printf("\n");
    }

    //    for(i = 0; i <= rows; i++){
    //     for(j = 1; j <= i ; j++){
    //         printf(" ");
    //     }
    //     for(k = 1; k <= 2 * (rows - i) - 1 ; k++){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    //     }

}
