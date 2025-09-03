#include <stdio.h>

int main() {

    // Variable declaration for examples
    int a = 12, b = 6, c = 2;
    int result;

    // Example 1: Demonstrating Precedence
    // The expression is: a + b / c
    // Because division (/) has higher precedence than addition (+),
    // the division 'b / c' is calculated first.
    // Evaluation: 12 + (6 / 2) -> 12 + 3 -> 15
    result = a + b / c;

    printf("1. Operator Precedence \n");
    printf("Expression: %d + %d / %d\n", a, b, c);
    printf("Result: %d\n", result);
    printf("\n");


    // Example 2: Demonstrating Associativity
    // The expression is: a / b * c
    // Division (/) and multiplication (*) have the same precedence.
    // The associativity for these operators is left-to-right.
    // Evaluation: (12 / 6) * 2 -> 2 * 2 -> 4
    result = a / b * c;

    printf("2. Operator Associativity (Left-to-Right) \n");
    printf("Expression: %d / %d * %d\n", a, b, c);
    printf("Result: %d\n", result);
    printf("\n");


    // Example 3: Using Parentheses to Override Rules
    // Parentheses have the highest priority and force the enclosed
    // expression to be evaluated first, overriding default precedence.
    // Expression: (a + b) / c
    // Evaluation: (12 + 6) / 2 -> 18 / 2 -> 9
    result = (a + b) / c;

    printf("3. Overriding Precedence with Parentheses \n");
    printf("Expression: (%d + %d) / %d\n", a, b, c);
    printf("Result: %d\n", result);
    printf("\n");

    return 0;
}