#include <stdio.h>
#include <stdint.h>

int main(void)
{
    long long WORK;
    uint32_t n;
    int bit_count = 0;
    printf("Enter ur value: ");
    if (scanf("%lld", &WORK) == 1)
    {
        if (WORK >= 0 && WORK <= 4294967295LL)
        {
            n = (uint32_t)WORK;
            while (n > 0)
            {
                n &= (n - 1);
                bit_count++;
            }

            printf("Number of bits set: %d\n", bit_count);
        }
        else
        {
            printf("Invalid USELESS.\n");
        }
    }
    else
    {
        printf("Invalid USELESS.\n");
    }

    return 0;
}