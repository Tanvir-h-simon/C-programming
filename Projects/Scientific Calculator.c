#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define PI 3.14159265358979323846
#define E 2.71828182845904523536

void displayMenu();
void clearScreen();
double performBasicOperation(double num1, double num2, char operator);
double performScientificOperation(double num, int operation);
double factorial(int n);
double power(double base, double exponent);
double logarithm(double num, int base);
void memoryOperations();
int validateInput(char* input);
double degreeToRadian(double degree);
double radianToDegree(double radian);

// Global memory variable
double memory = 0.0;

int main() {
    int choice;
    double num1, num2, result;
    char operator;
    
    bool running = true;

    while (running) {
        displayMenu();
        printf("Enter your choice (1-15): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        
        switch (choice) {
            case 1: // Basic Arithmetic Operations
                printf("\nBasic Operations: +, -, *, /, %% (modulo)\n");
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter operator (+, -, *, /, %%): ");
                scanf(" %c", &operator);
                
                if (operator == '%') {
                    printf("Enter second number (integer): ");
                    int int1 = (int)num1, int2;
                    scanf("%d", &int2);
                    if (int2 != 0) {
                        result = int1 % int2;
                        printf("Result: %d %% %d = %.0f\n", int1, int2, result);
                    } else {
                        printf("Error: Division by zero!\n");
                    }
                } else {
                    printf("Enter second number: ");
                    scanf("%lf", &num2);
                    result = performBasicOperation(num1, num2, operator);
                    if (result != -999999) { // Error flag
                        printf("Result: %.6f %c %.6f = %.6f\n", num1, operator, num2, result);
                    }
                }
                break;
                
            case 2: // Power and Square Root
                printf("\n1. Power (x^y)\n2. Square Root\n3. Cube Root\n");
                printf("Choose operation: ");
                int powChoice;
                scanf("%d", &powChoice);
                
                if (powChoice == 1) {
                    printf("Enter base: ");
                    scanf("%lf", &num1);
                    printf("Enter exponent: ");
                    scanf("%lf", &num2);
                    result = power(num1, num2);
                    printf("Result: %.6f^%.6f = %.6f\n", num1, num2, result);
                } else if (powChoice == 2) {
                    printf("Enter number: ");
                    scanf("%lf", &num1);
                    if (num1 >= 0) {
                        result = sqrt(num1);
                        printf("Result: sqrt(%.6f) = %.6f\n", num1, result);
                    } else {
                        printf("Error: Cannot calculate square root of negative number!\n");
                    }
                } else if (powChoice == 3) {
                    printf("Enter number: ");
                    scanf("%lf", &num1);
                    result = cbrt(num1);
                    printf("Result: cbrt(%.6f) = %.6f\n", num1, result);
                } else {
                    printf("Invalid choice!\n");
                }
                break;
                
            case 3: // Trigonometric Functions
                printf("\n1. sin(x)  2. cos(x)  3. tan(x)\n");
                printf("4. asin(x) 5. acos(x) 6. atan(x)\n");
                printf("Choose function: ");
                int trigChoice;
                scanf("%d", &trigChoice);
                
                if (trigChoice >= 1 && trigChoice <= 3) {
                    printf("Enter angle in degrees: ");
                    scanf("%lf", &num1);
                    double radians = degreeToRadian(num1);
                    
                    switch (trigChoice) {
                        case 1:
                            result = sin(radians);
                            printf("Result: sin(%.2f degree) = %.6f\n", num1, result);
                            break;
                        case 2:
                            result = cos(radians);
                            printf("Result: cos(%.2f degree) = %.6f\n", num1, result);
                            break;
                        case 3:
                            if (fabs(cos(radians)) < 1e-10) {
                                printf("Error: tan(%.2f degree) is undefined (division by zero)!\n", num1);
                            } else {
                                result = tan(radians);
                                printf("Result: tan(%.2f degree) = %.6f\n", num1, result);
                            }
                            break;
                    }
                } else if (trigChoice >= 4 && trigChoice <= 6) {
                    printf("Enter value: ");
                    scanf("%lf", &num1);
                    
                    switch (trigChoice) {
                        case 4:
                            if (num1 >= -1 && num1 <= 1) {
                                result = radianToDegree(asin(num1));
                                printf("Result: asin(%.6f) = %.2f degree\n", num1, result);
                            } else {
                                printf("Error: Input must be between -1 and 1!\n");
                            }
                            break;
                        case 5:
                            if (num1 >= -1 && num1 <= 1) {
                                result = radianToDegree(acos(num1));
                                printf("Result: acos(%.6f) = %.2f degree\n", num1, result);
                            } else {
                                printf("Error: Input must be between -1 and 1!\n");
                            }
                            break;
                        case 6:
                            result = radianToDegree(atan(num1));
                            printf("Result: atan(%.6f) = %.2f degree\n", num1, result);
                            break;
                    }
                } else {
                    printf("Invalid choice!\n");
                }
                break;
                
            case 4: // Logarithmic Functions
                printf("\n1. Natural log (ln)\n2. Log base 10\n3. Log base 2\n");
                printf("Choose logarithm: ");
                int logChoice;
                scanf("%d", &logChoice);
                
                printf("Enter number: ");
                scanf("%lf", &num1);
                
                if (num1 > 0) {
                    switch (logChoice) {
                        case 1:
                            result = log(num1);
                            printf("Result: ln(%.6f) = %.6f\n", num1, result);
                            break;
                        case 2:
                            result = log10(num1);
                            printf("Result: log10(%.6f) = %.6f\n", num1, result);
                            break;
                        case 3:
                            result = log2(num1);
                            printf("Result: log2(%.6f) = %.6f\n", num1, result);
                            break;
                        default:
                            printf("Invalid choice!\n");
                    }
                } else {
                    printf("Error: Logarithm undefined for non-positive numbers!\n");
                }
                break;
                
            case 5: // Factorial
                printf("Enter a non-negative integer: ");
                int factNum;
                scanf("%d", &factNum);
                
                if (factNum >= 0 && factNum <= 20) {
                    result = factorial(factNum);
                    printf("Result: %d! = %.0f\n", factNum, result);
                } else if (factNum > 20) {
                    printf("Error: Number too large (maximum 20)!\n");
                } else {
                    printf("Error: Factorial undefined for negative numbers!\n");
                }
                break;
                
            case 6: // Exponential Functions
                printf("\n1. e^x\n2. 10^x\n3. 2^x\n");
                printf("Choose exponential: ");
                int expChoice;
                scanf("%d", &expChoice);
                
                printf("Enter exponent: ");
                scanf("%lf", &num1);
                
                switch (expChoice) {
                    case 1:
                        result = exp(num1);
                        printf("Result: e^%.6f = %.6f\n", num1, result);
                        break;
                    case 2:
                        result = pow(10, num1);
                        printf("Result: 10^%.6f = %.6f\n", num1, result);
                        break;
                    case 3:
                        result = pow(2, num1);
                        printf("Result: 2^%.6f = %.6f\n", num1, result);
                        break;
                    default:
                        printf("Invalid choice!\n");
                }
                break;
                
            case 7: // Hyperbolic Functions
                printf("\n1. sinh(x)  2. cosh(x)  3. tanh(x)\n");
                printf("Choose function: ");
                int hypChoice;
                scanf("%d", &hypChoice);
                
                printf("Enter number: ");
                scanf("%lf", &num1);
                
                switch (hypChoice) {
                    case 1:
                        result = sinh(num1);
                        printf("Result: sinh(%.6f) = %.6f\n", num1, result);
                        break;
                    case 2:
                        result = cosh(num1);
                        printf("Result: cosh(%.6f) = %.6f\n", num1, result);
                        break;
                    case 3:
                        result = tanh(num1);
                        printf("Result: tanh(%.6f) = %.6f\n", num1, result);
                        break;
                    default:
                        printf("Invalid choice!\n");
                }
                break;
                
            case 8: // Absolute Value and Ceiling/Floor
                printf("\n1. Absolute value |x|\n2. Ceiling ceil(x)\n3. Floor floor(x)\n");
                printf("Choose function: ");
                int absChoice;
                scanf("%d", &absChoice);
                
                printf("Enter number: ");
                scanf("%lf", &num1);
                
                switch (absChoice) {
                    case 1:
                        result = fabs(num1);
                        printf("Result: |%.6f| = %.6f\n", num1, result);
                        break;
                    case 2:
                        result = ceil(num1);
                        printf("Result: ceil(%.6f) = %.0f\n", num1, result);
                        break;
                    case 3:
                        result = floor(num1);
                        printf("Result: floor(%.6f) = %.0f\n", num1, result);
                        break;
                    default:
                        printf("Invalid choice!\n");
                }
                break;
                
            case 9: // Memory Operations
                memoryOperations();
                break;
                
            case 10: // Constants
                printf("\nMathematical Constants:\n");
                printf("PI (Pi) = %.15f\n", PI);
                printf("e (Euler's number) = %.15f\n", E);
                printf("Would you like to use a constant in calculation? (y/n): ");
                char useConst;
                scanf(" %c", &useConst);
                
                if (useConst == 'y' || useConst == 'Y') {
                    printf("Enter 1 for PI, 2 for e: ");
                    int constChoice;
                    scanf("%d", &constChoice);
                    
                    if (constChoice == 1) {
                        memory = PI;
                        printf("PI stored in memory.\n");
                    } else if (constChoice == 2) {
                        memory = E;
                        printf("e stored in memory.\n");
                    }
                }
                break;
                
            case 11: // Degree/Radian Conversion
                printf("\n1. Degrees to Radians\n2. Radians to Degrees\n");
                printf("Choose conversion: ");
                int convChoice;
                scanf("%d", &convChoice);
                
                printf("Enter value: ");
                scanf("%lf", &num1);
                
                if (convChoice == 1) {
                    result = degreeToRadian(num1);
                    printf("Result: %.6f degrees = %.6f radians\n", num1, result);
                } else if (convChoice == 2) {
                    result = radianToDegree(num1);
                    printf("Result: %.6f radians = %.6f degrees\n", num1, result);
                } else {
                    printf("Invalid choice!\n");
                }
                break;
                
            case 12: // Percentage Calculations
                {
                    int perChoice;
                    printf("\nPercentage Calculations:\n");
                    printf("1. Find x%% of y            (x%% * y)\n");
                    printf("2. What %% is x of y?        ((x / y) * 100)\n");
                    printf("3. x is y%% of what number?  (x * 100 / y)\n");
                    printf("Choose calculation: ");
                    scanf("%d", &perChoice);
                    
                    switch (perChoice) {
                        case 1:
                            printf("Enter percentage: ");
                            scanf("%lf", &num1);
                            printf("Enter number: ");
                            scanf("%lf", &num2);
                            result = (num1 * num2) / 100;
                            printf("Result: %.2f%% of %.2f = %.6f\n", num1, num2, result);
                            break;
                        case 2:
                            printf("Enter first number: ");
                            scanf("%lf", &num1);
                            printf("Enter second number: ");
                            scanf("%lf", &num2);
                            if (num2 != 0) {
                                result = (num1 * 100) / num2;
                                printf("Result: %.2f is %.2f%% of %.2f\n", num1, result, num2);
                            } else {
                                printf("Error: Division by zero!\n");
                            }
                            break;
                        case 3:
                            printf("Enter number: ");
                            scanf("%lf", &num1);
                            printf("Enter percentage: ");
                            scanf("%lf", &num2);
                            if (num2 != 0) {
                                result = (num1 * 100) / num2;
                                printf("Result: %.2f is %.2f%% of %.6f\n", num1, num2, result);
                            } else {
                                printf("Error: Division by zero!\n");
                            }
                            break;
                        default:
                            printf("Invalid choice!\n");
                    }
                }
                break;
                
            case 13: // Statistical Functions
                printf("Statistical Functions\n");
                printf("Enter number of values: ");
                int n;
                scanf("%d", &n);
                
                if (n <= 0 || n > 100) {
                    printf("Error: Number of values must be between 1 and 100!\n");
                    break;
                }
                
                double values[100];
                double sum = 0, mean, variance = 0, stdDev;
                
                printf("Enter %d values:\n", n);
                for (int i = 0; i < n; i++) {
                    printf("Value %d: ", i + 1);
                    scanf("%lf", &values[i]);
                    sum += values[i];
                }
                
                mean = sum / n;
                
                for (int i = 0; i < n; i++) {
                    variance += pow(values[i] - mean, 2);
                }
                variance /= n;
                stdDev = sqrt(variance);
                
                printf("\nStatistical Results:\n");
                printf("Sum: %.6f\n", sum);
                printf("Mean: %.6f\n", mean);
                printf("Variance: %.6f\n", variance);
                printf("Standard Deviation: %.6f\n", stdDev);
                break;
                
            case 14: // Number Base Conversion
                printf("\n1. Decimal to Binary\n2. Decimal to Hexadecimal\n3. Binary to Decimal\n4. Hexadecimal to Decimal\n");
                printf("Choose conversion: ");
                int baseChoice;
                scanf("%d", &baseChoice);
                
                switch (baseChoice) {
                    case 1: {
                        printf("Enter decimal number: ");
                        int decimal;
                        scanf("%d", &decimal);
                        printf("Result: %d (decimal) = ", decimal);
                        
                        if (decimal == 0) {
                            printf("0 (binary)\n");
                        } else {
                            char binary[33];
                            int index = 0;
                            int temp = abs(decimal);
                            
                            while (temp > 0) {
                                binary[index++] = (temp % 2) + '0';
                                temp /= 2;
                            }
                            
                            if (decimal < 0) printf("-");
                            for (int i = index - 1; i >= 0; i--) {
                                printf("%c", binary[i]);
                            }
                            printf(" (binary)\n");
                        }
                        break;
                    }
                    case 2: {
                        printf("Enter decimal number: ");
                        int decimal;
                        scanf("%d", &decimal);
                        printf("Result: %d (decimal) = %X (hexadecimal)\n", decimal, decimal);
                        break;
                    }
                    case 3: {
                        printf("Enter binary number: ");
                        char binary[33];
                        scanf("%s", binary);
                        
                        int decimal = 0;
                        int power = 0;
                        int len = strlen(binary);
                        
                        for (int i = len - 1; i >= 0; i--) {
                            if (binary[i] == '1') {
                                decimal += (int)pow(2, power);
                            } else if (binary[i] != '0') {
                                printf("Error: Invalid binary number!\n");
                                decimal = -1;
                                break;
                            }
                            power++;
                        }
                        
                        if (decimal != -1) {
                            printf("Result: %s (binary) = %d (decimal)\n", binary, decimal);
                        }
                        break;
                    }
                    case 4: {
                        printf("Enter hexadecimal number: ");
                        char hex[20];
                        scanf("%s", hex);
                        
                        int decimal;
                        if (sscanf(hex, "%x", &decimal) == 1) {
                            printf("Result: %s (hexadecimal) = %d (decimal)\n", hex, decimal);
                        } else {
                            printf("Error: Invalid hexadecimal number!\n");
                        }
                        break;
                    }
                    default:
                        printf("Invalid choice!\n");
                }
                break;
                
            case 15: // Exit
                printf("\nThank you for using the Scientific Calculator!\n");
                printf("Goodbye!\n");
                running = false;
                break;
                
            default:
                printf("Invalid choice! Please select 1-15.\n");
        }
        
        if (running) {
            printf("\nPress Enter to continue...");
            while (getchar() != '\n'); // Clear input buffer
            getchar(); // Wait for Enter
        }
    }
    
    return 0;
}

void displayMenu() {
    printf("    SCIENTIFIC CALCULATOR    \n");
    printf("1.  Basic Arithmetic (+, -, *, /, %%)\n");
    printf("2.  Power & Root Functions\n");
    printf("3.  Trigonometric Functions\n");
    printf("4.  Logarithmic Functions\n");
    printf("5.  Factorial\n");
    printf("6.  Exponential Functions\n");
    printf("7.  Hyperbolic Functions\n");
    printf("8.  Absolute Value & Rounding\n");
    printf("9.  Memory Operations\n");
    printf("10. Mathematical Constants\n");
    printf("11. Degree/Radian Conversion\n");
    printf("12. Percentage Calculations\n");
    printf("13. Statistical Functions\n");
    printf("14. Number Base Conversion\n");
    printf("15. Exit\n");
}

double performBasicOperation(double num1, double num2, char operator) {
    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                return -999999; // Error flag
            }
        default:
            printf("Error: Invalid operator!\n");
            return -999999; // Error flag
    }
}

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double degreeToRadian(double degree) {
    return degree * PI / 180.0;
}

double radianToDegree(double radian) {
    return radian * 180.0 / PI;
}

void memoryOperations() {
    int memChoice;
    double value;
    
    printf("\nMemory Operations:\n");
    printf("1. Store value in memory (MS)\n");
    printf("2. Recall memory (MR)\n");
    printf("3. Add to memory (M+)\n");
    printf("4. Subtract from memory (M-)\n");
    printf("5. Clear memory (MC)\n");
    printf("Current memory value: %.6f\n", memory);
    printf("Choose operation: ");
    
    scanf("%d", &memChoice);
    
    switch (memChoice) {
        case 1:
            printf("Enter value to store: ");
            scanf("%lf", &value);
            memory = value;
            printf("Value %.6f stored in memory.\n", value);
            break;
        case 2:
            printf("Memory recall: %.6f\n", memory);
            break;
        case 3:
            printf("Enter value to add: ");
            scanf("%lf", &value);
            memory += value;
            printf("Memory = %.6f + %.6f = %.6f\n", memory - value, value, memory);
            break;
        case 4:
            printf("Enter value to subtract: ");
            scanf("%lf", &value);
            memory -= value;
            printf("Memory = %.6f - %.6f = %.6f\n", memory + value, value, memory);
            break;
        case 5:
            memory = 0.0;
            printf("Memory cleared.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
}