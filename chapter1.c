#include <stdio.h>
int main()
{

    // take side value as input and return squeare.

    /* float side;
     printf("Enter value of side");
     scanf("%f", &side);
     printf("Square : %f", side * side);
     */

    //

    /* Chapter -1 Home Work*/

    /*
    Problem 1 :Write a program to calculate perimeter of rectangle.
    Take sides, a & b, from the user.

    int length;
    int breadth;

    printf("Plase enter length value :");
    scanf("%d", &length);
    printf("Plase enter breadth value :");
    scanf("%d", &breadth);

    int perimeter = 2 * (length + breadth);
    printf("Perimeter : %d", perimeter);

    */

    /*
  Prblem 2:  Take a number(n) from user & output its cube(n*n*n).


    float number;
    printf("Plase enter any number :");
    scanf("%f", &number);
    printf("Cube : %f", number * number * number);


    */

    /**
     * F° to C°: Fahrenheit to Celsius Conversion
     * To convert temperatures in degrees Fahrenheit to Celsius, subtract 32 and multiply by .5556 (or 5/9).
     * Example: (50°F - 32) x .5556 = 10°C
     *
     */

    float F;
    printf("Plase enter value of Fahrenheit :");
    scanf("%f", &F);
    float celsius = (F - 32) * .5556;
    printf("%f", celsius);

    return 0;
}