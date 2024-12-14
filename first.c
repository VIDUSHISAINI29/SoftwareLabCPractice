// #include<stdio.h>
// #include<math.h>
// int main(){
//     int rows, i, j, k;
//     printf("Enter Number of Rows : ");
//     scanf("%d", &rows);

//     for(i = 1; i <= rows; i++){
//         for(j = 1; j <= (rows - i) ; j++){
//             printf(" ");
//         }
//         for(k = 1; k <= (i * 2 - 1) ; k++){
//             printf("%d", i);
//         }
//         printf("\n");
//     }

//        for(i = 0; i <= rows; i++){
//         for(j = 1; j <= i ; j++){
//             printf(" ");
//         }
//         for(k = 1; k <= 2 * (rows - i) - 1 ; k++){
//             printf("%d",k);
//         }
//         printf("\n");
//         }

// }


//# Factorial Program


// #include<stdio.h>
// int factorial(int n){
//     int i, fact = 1;
//     for(int i = 1; i <= n; i++){
//         fact = fact * i ;
     
//     }
//     return fact;
// }
// int main(){
//     int num ;
//     printf("Enter a number of which factorial you want : ");
//     scanf("%d", &num);
//     printf("Factorial of %d is %d \n", num, factorial(num));
//     return 0;
// }

//# Swapping two numbers using pointers

void swapping (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 10, b = 15;
    int *ptr1 = &a, *ptr2 = &b;
    printf("Before swapping : a = %d, b = %d\n", a, b);
    swapping(ptr1, ptr2);
    printf("After swapping : a = %d, b = %d\n", a, b);
    return 0;
}
