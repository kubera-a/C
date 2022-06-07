#include <stdio.h>
#include <stdlib.h>

/* print Fahrenheit-Celsius table for
fahr = 0, 20, ..., 300 but with floats!*/
main()
{
    float fahr, celsius;      /* declaration, variables must be declared before usage */
    float lower, upper, step; /* declarations contain properties (int), a name (upper) and list of variables */

    lower = 0; /* assignment statements */
    upper = 300;
    step = 20;

    fahr = lower;
    printf("This prints a heading above the table \n");
    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0; /* float and int operations get cast to float and float! */
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    system("pause");
}