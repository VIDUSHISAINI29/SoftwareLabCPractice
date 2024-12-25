#include<stdio.h>

// # binary search program

int binarySearch(int arr[], int size, int target){
    int low = 0 , high = size - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
     return mid;
    }
    if(arr[mid] < target){
        low = mid + 1;
    }
    else{
        low = mid - 1;
    }
    }
    return -1;
} 

void main(){
    int target, arr[] = {1, 2 , 3, 4, 5,6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Enter element to search : ");
    scanf("%d", &target);
    int result = binarySearch(arr, size, target);
    if(result != -1){
        printf("element %d found at %d index ", target, result);
    }
    else{
        printf("Element not found in the list.");
    }
}