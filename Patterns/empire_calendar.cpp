/*
ACMICPC #6064
카잉 달력
*/

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <numeric>
#include <typeinfo>

using namespace std;

#define SIZE (M*N)/gcd(M,N)

long long gcd(long long int a, long long int b)
{
    while(b!=0)
    {
        long int c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int main()
{
    long long int T, M, N, x, y;
    scanf("%lld", &T);

    while(T--)
    {
        scanf("%lld %lld %lld %lld", &M, &N, &x, &y);
        // printf("LCM = %lld\n", SIZE);

        int maxYear = SIZE;

        while (1)

        {
            //기저사례이거나(멸망년도 벗어남)
            //x, y를 만족하는 년도 찾음
            if (x > maxYear || (x - 1) % N + 1 == y)    break;
            x += M; //M으로 나눈 나머지가 X
        }
        if(x>maxYear)   {printf("-1\n");}
        else    printf("%lld\n", x);
    }
}
