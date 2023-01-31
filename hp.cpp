#include <bits/stdc++.h>
using namespace std;

int sumDigitSquare(int n)
{
	int sq = 0;
	while (n) {
		int digit = n % 10;
		sq += digit * digit;
		n = n / 10;
	}
	return sq;
}

bool isHappy(int n)
{
	while (1) {

		if (n == 1)
			return true;

		n = sumDigitSquare(n);

		if (n == 4)
			return false;
	}
	return false;
}


int main()
{
	int t, n;
	cin >> t;
	for (int i=1; i<=t; i++)
    {
        cin >> n;
        if (isHappy(n))
        {
            cout << "Case #" << i << ": " << n << " is a Happy Number." << endl;
        }
        else
        {
            cout << "Case #" << i << ": " << n << " is an Unhappy Number." << endl;
        }
    }
	return 0;
}


