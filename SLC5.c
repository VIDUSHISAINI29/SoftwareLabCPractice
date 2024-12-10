#include <stdio.h>
#include <math.h>

int findD(float a, float b, float c) {
    return (b * b) - (4 * a * c);
}

void findRoots(float a, float b, float c) {
    float D, root1, root2;
    D = findD(a, b, c);
    printf("\nDiscriminant (D) = %.2f\n", D);

    switch (D > 0 ? 1 : (D < 0 ? -1 : 0)) {
    case 1:
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("The equation has two distinct real roots:\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
        break;
    case 0:
        root1 = -b / (2 * a);
        printf("The equation has two equal real roots:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
        break;
    case -1:
        printf("The equation has no real roots (complex roots).\n");
        break;
    default:
        printf("Error in root calculation.\n");
        break;
    }
}

int main() {
    float a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be 0).\n");
        return 1;
    }

    printf("Equation coefficients: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    findRoots(a, b, c);

    return 0;
}
