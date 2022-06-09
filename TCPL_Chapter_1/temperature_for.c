#include <stdio.h>
#include <stdlib.h>

/* print Celsius-Fahrenheit table */

main()
{
    int celc;
    /* for*(start, stop step) */
    for (celc = 0; celc <= 100; celc = celc + 10)
    printf("%3d %6.1f \n", celc, (((9.0 / 5.0) * (celc)) + 32));

    system("pause");
}
