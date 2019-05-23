/*
ACMICPC #1011
Count the shortest paths of warps
*/
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        long long i = 1;

        while (i * i <= (y - x))
        {
            ++i;
            // printf("++i: %lld\n", i);
        }
        i--;
        // printf("--i: %lld\n", i);

        long long remaining = (y - x) - (i * i);
        // printf("remaining: %lld\n", remaining);

        remaining = (long long)ceil((double)remaining / (double)i);
        // printf("remaining round up: %lld\n", remaining);
        printf("%lld\n", i*2-1+remaining);
    }
}
