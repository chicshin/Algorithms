/*
ACMICPC #1193
Find the factorial in the given index.
*/
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, cnt=0;
    scanf("%d", &n);
    while(n>0)
    {
        ++cnt;
        n-=cnt;
        printf("cnt= %d n= %d\n", cnt, n);
    }
    if(cnt%2==0)
    {
        printf("%d/%d", cnt+n, 1+(-n));
    }
    else
    {
        printf("%d/%d", 1+(-n), cnt+n);
    }
    printf("\n");
}
