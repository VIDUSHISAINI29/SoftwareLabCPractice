#include<stdio.h>
#include<conio.h>
int findD(int a, int b, int c){
    int D = 0 ;
    D = (b*b) - (4*a*c);
    return D;
}
void main(){
    int a, b, c, D, root1, root2 ;
    printf("Enter a , b, c");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d ,b = %d, c = %d", a, b, c);
    D = findD(a, b, c);
    root1 = (D-b)/ 2*a;
    root2 = (-b-D)/2*a;
    switch (D > 0 ? 1 : (D < 0 ? -1 : 0))
    {
    case 1:
        printf("have diff real roots \t root1 = %d, root2 = %d", root1, root2);
        break;
    case -1:
        printf("have equal real roots \t root1 = %d, root2 = %d", root1, root2);
        break;
    case 0:
        printf("have equal real roots \t root1 = %d, root2 = %d", root1, root2);
        break;
    
    default:
    printf("no roots");
        break;
    }
}