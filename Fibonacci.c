#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nth;
    long long n0=0, n1=1, nxt;
    printf("Enter number: ");
    scanf("%lld, ", &nth);
    if (nth<=2)
    {
        printf("Invalid input.\n");
    }
    else
    {
        for(int count = 1; count <= nth; count++)
        {
            printf("%lld, ", n0);
            nxt = n0+ n1;
            n0=n1;
            n1=nxt;
        }
    }

    return 0;

}