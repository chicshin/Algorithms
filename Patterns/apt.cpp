/*
ACMICPC #2775
Find the number of people living in the given apartment address.
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
    int T, K, N;
    scanf("%d", &T);
    int arr[15][14]={0};
    for(int i=0; i<14; ++i)
    {
        arr[0][i]+=i+1;
        arr[i+1][0]=1;
    }
    for(int i=1; i<14; ++i)
    {
        for(int j=1; j<15; ++j)
        {
            arr[j][i]=arr[j][i-1]+arr[j-1][i];
        }
    }
    while(T--)
    {
        scanf("%d", &K);
        scanf("%d", &N);
        printf("%d\n", arr[K][N-1]);
    }
}
