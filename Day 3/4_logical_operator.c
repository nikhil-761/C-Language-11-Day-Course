#include <stdio.h>

int main()
{

    int a = 1, b = 1;
    int c = 0, d = 0;
    int e = 1, f = 0;

    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n\n", a || b);

    printf("The value of c and d is %d\n", c && d);
    printf("The value of c or d is %d\n\n", c || d);

    printf("The value of e and f is %d\n", e && f);
    printf("The value of e or f is %d\n\n", e || f);

    printf("The value is not a %d\n", !a);

    return 0;
}