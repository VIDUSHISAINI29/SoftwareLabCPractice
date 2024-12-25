#include<stdio.h>
#include<string.h>
void main(){
    char fname[18];
    char lname[18];
    printf("Enter First Name : ");
    scanf("%18s", &fname);
    printf("Enter Last Name : ");
    scanf("%18s", &lname);
    strcat(fname, " ");
    strcat(fname, lname);
    printf("Your full name is : %s\n", fname);
}