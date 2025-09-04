#include <stdio.h>

int main()
{

    if (1)
    {
        printf("1 is executed because non zero\n");
    }

    if (23)
    {
        printf("23 is executed because non zero\n");
    }

    if (0)
    {
        printf("0 is not executed");
    }
    return 0;
}