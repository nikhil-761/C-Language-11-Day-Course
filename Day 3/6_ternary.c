#include <stdio.h>

int main()
{
    // condition ? expression-if-true : expression-if-false
    //  Here "?" and ":" are called Ternary Operators

    int a = 432;
    int b = 2034;

    a > b ? printf("a is greater") : printf("b is greater");
    return 0;
}