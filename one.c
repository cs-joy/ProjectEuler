#include<stdio.h>
#define LIMIT 1000

int main()
{
    int sum = 0;

    for (int i=0; i<LIMIT; i++)
    {
        if (i%5 == 0 || i % 3 == 0)
        {
            sum += i;
        }
    }

    printf("The sum of these multiplies is: %d", sum);

    return 0;
}


/**
  *** Multiples of 3 or 5
  ***
  Problem 1: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

           Find the sum of all the multiples of 3 or 5 below 1000.

ref of answer:: https://math.stackexchange.com/questions/9259/find-the-sum-of-all-the-multiples-of-3-or-5-below-1000
*/
