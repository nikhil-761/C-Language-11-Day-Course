//Type Declaration Instruction

#include <stdio.h>

int main()
{
    int x=34; //Declare and initialize x with 10
    int y=x;  //Declare and initialize y with the value of x
    int a=10, b=6, c=9, d=21, e=43, f=10; //Declare and Initialize in different way
    float g=5.7; // Float value

    // %d is for format specifier
    // %d is for int, %f is for float, %c is for char
    // \n is for next line

    printf("The value of x is %d and The value of y is %d\n",x,y);
    printf("The value of a is %d and The value of b is %d\n",a,b);
    printf("The value of c is %d and The value of d is %d\n",c,d);
    printf("The value of e is %d and The value of f is %d\n",e,f);
    printf("The value of g is  %f",g);
    return 0;
}