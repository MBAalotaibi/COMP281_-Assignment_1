#include <stdio.h>

int main()
{
    int num, denom, prec;

    // Get input from user
    scanf("%d %d %d", &num, &denom, &prec);

    // Initialize variables
    int rem[denom];
    int i;
    for (i = 0; i < denom; i++)
    {
        rem[i] = -1;
    }

    int quot = num / denom;
    int r = num % denom;
    int digit = 0; // Declare digit variable outside while loop
    i = 0;

    // Calculate digits of the quotient
    while (i < prec)
    {
        r = r* 10;
        digit = r / denom;
        if (rem[r % denom] != -1)
        {
            i = prec + 1;
            digit = rem[r % denom];
        }
        rem[r % denom] = digit;
        r = r % denom;
        i++;
    }

    // Print result
    if (i == prec)
    {
        printf("%d\n", digit);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}

