#include<stdio.h>

// # linear search program

void linearSearch(int arr[], int n, int target){
     
    int found = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            printf("element %d found at %d index", target, i);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Element  %d is not in list.", target);
    }
}
int main(){
    int n, target;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element you want to search for : ");
    scanf("%d", &target);
    linearSearch(arr, n, target);
    return 0;
}


