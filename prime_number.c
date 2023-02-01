#include<stdio.h>

int main()
{
    int init=1, limit, flag;
    printf("Enter limit: ");
    scanf("%d",  &limit);

    // iteration until init is not equal to limit
    while (init < limit)
    {
        flag = 0;

        // ignore numbers less than 2
        if (init <= 1)
        {
            init++;
            continue;
        }

        // if init is a non-prime number, flag will be 1
        for (int i=2; i<= init / 2; i++)
        {
            if (init%i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d ", init);
        }

        // to check prime for the next number
        // increase init by 1
        init++;
    }

    return 0;
}


/**
 *
 * print prime numbers from the given range
 *
*/
