#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c; // Equation: ax^2+bx+c=0
    double root1, root2; // x1 = root1, x2 = root2

    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    double D; // D = discriminant
    D = b * b - 4 * a * c;
    double real_part, imag_part; // To store real and imaginary parts of complex roots

    if (D > 0) {
        root1 = (-b-sqrt(D))/(2*a); // x1 = root1 = (-b - sqrt(b*b - 4*a*c))/2*a
        root2 = (-b+sqrt(D))/(2*a); // x2 = root2 = (-b + sqrt(b*b - 4*a*c))/2*a
        printf("Roots are real and different:\n");
        printf("Root1 = %.2lf and Root2 = %.2lf\n", root1, root2);
        }
        else if (D == 0) {
        root1 = root2 = -b/(2*a); // root1 = root2 = (-b ± sqrt(0))/2*a)
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
        }
        else { // (D < 0)
        real_part = -b/(2*a); // Real part = -b/(2*a)
        imag_part = sqrt(-D)/(2*a); // Imaginary part = sqrt(-D)/(2*a)
        printf("Roots are complex and different:\n");
        printf("Root1 = %.2lf+%.2lfi and Root2 = %.2lf-%.2lfi\n", real_part, imag_part, real_part, imag_part);
    }
    return 0;
}
