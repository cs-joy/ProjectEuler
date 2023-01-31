#include<stdio.h>

int main()
{
    int limit = 4000000;
    int sum =0;
    int x = 1;
    int y = 1;
    int z;

    while (y < limit)
    {
        if (y%2 == 0)
        {
            sum += y;
        }
        z = x + y;
        x = y;
        y = z;
    }

    printf("%d", sum);


    return 0;
}


/**
 * Even Fibonacci numbers
 * **********************
 * Problem 2:Each new term in the Fibonacci sequence is generated by adding the previous two terms.
   By starting with 1 and 2, the first 10 terms will be:
                                                        1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
   By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/
