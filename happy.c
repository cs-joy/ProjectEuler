#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>

long int CheckHappy(long int n);
using namespace std;
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
            happy=CheckHappy(n);
            if(happy==1)
                printf("Case #%d: %ld is a Happy number.\n", i, n);
            else
                printf("Case #%d: %ld is an Unhappy number.\n", i, n);
        }
    }
}

long int CheckHappy(long int n)
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
        return CheckHappy(sum);
}
