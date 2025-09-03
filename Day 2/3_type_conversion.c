#include <stdio.h>

int main() {

    // Implicit Type Conversion (Promotion)
    // In an expression with mixed data types, the compiler automatically converts
    // the smaller type to the larger type. This is called promotion.
    // Here, 'val_int' (int) is promoted to float before addition.
    
    int val_int = 10;
    float val_float = 5.5f;
    float promotion_result = val_int + val_float; // Result: 10.0f + 5.5f = 15.5f

    printf("1. Implicit Promotion (int to float)\n");
    printf("   %d + %f = %f\n\n", val_int, val_float, promotion_result);

    // Integer Division vs. Float Division
    // When both operands are integers, the result is also an integer,
    // and any fractional part is discarded (truncated).
    
    int a = 5;
    int b = 2;
    int int_division_result = a / b; // Result: 2 (the .5 is truncated)

    printf("2. Division Examples\n");
    printf("   Integer Division:      5 / 2 = %d\n", int_division_result);

    // If at least one operand is a float, the result is a float.
    float c = 5.0f;
    float float_division_result = c / b; // Result: 2.5

    printf("   Floating-Point Division: 5.0 / 2 = %f\n\n", float_division_result);


    // Explicit Type Conversion (Casting)
    // We can manually force the conversion of a data type using a cast operator.
    // Here, we cast the integer 'x' to a float to perform float division.
    
    int x = 5;
    int y = 2;
    float cast_result = (float)x / y; // 'x' is treated as 5.0f for this operation

    printf("3. Explicit Casting to Force Float Division\n");
    printf("   (float)%d / %d = %f\n\n", x, y, cast_result);


    // Type Demotion (Potential Data Loss)
    // Assigning a value from a larger type (float) to a smaller type (int)
    // causes the fractional part to be lost. This is called demotion or truncation.

    float pi_value = 3.14f;
    int integer_pi = pi_value; // The value is truncated from 3.14 to 3

    printf("4. Type Demotion (float to int)\n");
    printf("   Assigning %f to an int results in %d\n", pi_value, integer_pi);

    return 0;
}