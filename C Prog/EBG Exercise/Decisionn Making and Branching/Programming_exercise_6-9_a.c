#include <stdio.h>

int main()
{
    int y;
    double x;
    printf("\nEnter the value of x : ");
    scanf("%lf", &x);
    if (x >= 0)
    {
        if (x > 0)
        {
            y = 1;
        }
        else
        {
            y = 0;
        }
    }
    else
    {
        y = -1;
    }

    if (x == 0)
    {
        printf("\nFor x = %.0lf, y = %d\n\n", (x + 0.0045), y);
    }
    else
    {
        printf("\nFor x = %.2lf, y = %d\n\n", (x + 0.0045), y);
    }
    return 0;
}