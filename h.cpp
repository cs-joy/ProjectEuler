#include<bits/stdc++.h>

using namespace std;

long int check_if_happy(long int n);
long int a[1000000],indx;


int main()
{
    long int t, n, i,happy;
    while(scanf("%ld",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%ld",&n);
            if(n==0)
            {
                printf("Case #%d: %ld is an Unhappy number.\n", i, n);
                continue;
            }
            a[0]=n;
            indx=1;
            happy=check_if_happy(n);
            if(happy==1)
                printf("Case #%d: %ld is a Happy number.\n", i, n);
            else
                printf("Case #%d: %ld is an Unhappy number.\n", i, n);
        }
    }
}

long int check_if_happy(long int n)
{
    long int mod, sum=0,set=0,j;
    if(n<10)
        sum=n*n;
    else
    {
        while(n!=0)
        {
            mod=n%10;
            sum=sum+(mod*mod);
            n=n/10;

        }
    }
    a[indx++]=sum;
    for(j=0;j<indx-1;j++)
    {
        if(a[j]==sum)
            set=1;
    }
    if(sum==1 || set==1)
        return (sum);
    else
        return check_if_happy(sum);
}
