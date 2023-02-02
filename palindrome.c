/** Largest palindrome product
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 � 99.
   Find the largest palindrome made from the product of two 3-digit numbers.
 *
*/

#include<stdio.h>

int opposite(int n);

int main()
{
    int largest = 0;
    for (int i = 100; i <= 999; i++) {

		for (int j = 100; j <= 999; j++) {

			if (i*j==opposite(i*j) && i*j > largest)

				largest = i*j;
		}

	}

	printf("%d", largest);

    return 0;
}


int opposite(int n) {

	int m = 0;

	while (n > 0) {

		m = m * 10 + n % 10;
		n = n / 10;
	}

	return m;
}