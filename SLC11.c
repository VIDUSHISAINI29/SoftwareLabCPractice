#include<stdio.h>
#include<string.h>


void main(){
    char name[36] , ch[2];
    int length = 0, i = 0;
    char initialName[36];
    printf("Enter String : ");
    scanf("%36s", &name);
    strcpy(initialName, name);
    length = strlen(name);
    for(i = 0; i < length/2; i++){
        ch[0] = name[i];
        name[i] = name[length - 1 - i];
        name[length - 1 - i] = ch[0];
    }
    printf("name = %s\n", name);
    printf("inital name = %s\n", initialName);
    if(strcmp(name, initialName) == 0)
    {
        printf("string %s is a palindrome",name);
    }
    else{
        printf("string %s is not a palindrome",name);
    }
}