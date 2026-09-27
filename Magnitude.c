#include <stdlib.h>
#include <stdio.h>
int main()
{
int x;
    while(1)
{
printf("Enter a number: ");
scanf("%d", &x); 
if (x < 0)
    {
        x = abs(x);
        printf("your magnitude is: ");
        printf("%d", x);
        printf("\n");

    }
else
    {
        printf("your magnitude is: ");
        printf("%d", x);
        printf("\n");
    }
}
}