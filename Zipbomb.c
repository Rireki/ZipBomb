#include <stdio.h>
main()
    {
    float celc, fahr;
    int upper, lower, step;

    upper = 1000;
    lower = 0;
    step = 50;

    fahr = lower;
    while(1 <= 2) {
        celc = (0.5 * fahr) - 32;
        printf("%3.0f %6.1f\n", fahr, celc);
        fahr = fahr + step;
    }
    }




