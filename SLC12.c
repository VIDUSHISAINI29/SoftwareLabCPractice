#include<stdio.h>
#include<string.h>


void main(){
    char name[36] , ch[2];
    int length = 0, i = 0;
    printf("Enter String : ");
    scanf("%36s", &name);
    length = strlen(name);
    for(i = 0; i < length/2; i++){
        ch[0] = name[i];
        name[i] = name[length - 1 - i];
        name[length - 1 - i] = ch[0];
    }
    printf("reversed string is  = %s\n", name);
   
}