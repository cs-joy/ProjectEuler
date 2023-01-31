#include<iostream>

using namespace std;


int main()
{
    int r1, r2;
    int sum=0;
    int t;
    cin >> t;


    for (int i=1; i<=t; i++)
    {
        cin >> r1 >> r2;

        for(int j=r1; j<=r2; j++)
        {
            if (j%2 == 1)
            {
                sum += j;
            }
        }


        cout << "Case " << i << ": " << sum << endl;
        sum = 0;
    }



    return 0;
}
