#include <stdio.h>

/* print Fahrenheit-Celsius table for
fahr = 0, 20, ..., 300 */
main()
{
    int fahr, celsius;      /* declaration, variables must be declared before usage */
    int lower, upper, step; /* declarations contain properties (int), a name (upper) and list of variables */

    lower = 0; /* assignment statements */
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9; /* integer division truncates therefore 5/9 -> 0 */
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}