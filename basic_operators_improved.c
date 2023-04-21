#include <stdio.h>

int main() {
    int num1, num2;
    printf("Please enter values for num1 and num2:\n");
    scanf("%d %d", &num1, &num2);
    
    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    float quotient;
    
    if (num2 == 0) {
        fprintf(stderr, "Error: division by zero\n");
        return 1;
    } else {
        quotient = (float) num1 / num2;
    }
    
    printf("Sum of %d and %d: %d\n", num1, num2, sum);
    printf("Difference of %d and %d: %d\n", num1, num2, diff);
    printf("Product of %d and %d: %d\n", num1, num2, prod);
    printf("Quotient of %d and %d: %.2f\n", num1, num2, quotient);
    
    return 0;
}
