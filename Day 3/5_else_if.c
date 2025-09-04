#include <stdio.h>

int main()
{

    int score = 85;

    if (score > 90)
    {
        printf("Excellent! You Scored grade A");
    }

    else if (score > 75)
    {
        printf("Good Job! Yoy Scored grade B");
    }

    else if (score > 60)
    {
        printf("You passed with Grade C");
    }

    else
    {
        printf("You need to work harder. You Scored Grade D");
    }

    return 0;
}