#include<stdio.h>

int main()
{
    int a, b;
    
    printf("Value of a\n");
    scanf("%d", &a);

    printf("Value of b\n");
    scanf("%d", &b);

    printf("a && b = %d\n", a&&b);
    printf("a || b = %d\n", a||b);
    printf("!a = %d\n", !a);
    printf("!b = %d\n", !b);

    return 0;
}