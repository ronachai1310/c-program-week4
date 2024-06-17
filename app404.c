#include <stdio.h>
void main()
{
    int x, y;
    printf("Enter X number:");
    scanf("%d", &x);
    printf("Enter Y number:");
    scanf("%d", &y);
    printf("Number is %d = %d + %d", (x + y), x, y);
}