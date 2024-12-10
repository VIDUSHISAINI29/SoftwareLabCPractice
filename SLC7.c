#include<stdio.h>
#include<conio.h>
void bubbleSort(int arr[5], int n){
    int temp, j, i;
   for ( i = 0; i < n - 1; i++)
   {
      for(j = 0; j < n - i - 1; j++)
    {
        if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
   }
   
}
int main(){
    int arr[5], n, i;
    printf("enter 5 numbers in a list : ");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted List is : ");
    for( i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}