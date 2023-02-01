#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    /** Step 1:
      * While n is divisible by 2, print 2 and divide n by 2.
      *
    */
    while (n%2 == 0)
    {
        printf("%lld ", 2);
        n = n/2;
    }

    /** Step 2:
      * After step 1, n must be odd. Now start a loop from i = 3 to square root of n.
      * While i divides n, print i and divide n by i, increment i by 2 and continue.
    */
    for (long int i=3; i<=sqrt(n); i= i+2)
    {
        while (n%i== 0)
        {
            printf("%lld ", i);
            n = n/i;
        }
    }


    /** Step 3:
      * If n is a prime number and is greater than 2, then n will not become 1 by above two steps.
      * So print n if it is greater than 2.
    */
    if (n > 2)
    {
        printf("%lld", n);
    }

    return 0;
}



/** Problem::
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/
