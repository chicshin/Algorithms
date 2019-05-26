/*
ACMICPC #1475
ctrl+d for console out.
*/

#include <stdio.h>
#include <cstdio>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <typeinfo>

using namespace std;
#define LEN 1000000

int main()
{
    int n, arr[9]={0,}, m=0;
    while(~scanf("%1d", &n))
    {
        if(n==9) ++arr[6];
        ++arr[n];
    }

    arr[6]=ceil(arr[6]/2.0);
    for(int i=0; i<9; ++i)
    {
        if(m<arr[i])    m=arr[i];
    }
    printf("%d", m);
}

//solution 2
// int a[10],x,r;
// int main() {
//     while (~scanf("%1d", &x)) a[x]++;
//     a[6] = (a[6] + a[9] + 1) / 2;
//     for (int i = 1; i < 9; i++) if (a[r] < a[i]) r = i;
//     printf("%d", a[r]);
//     return 0;
// }

//solution 3
// int main()
// {
    // char n[LEN];
    // int arr[9]={0,}, length, m=0;
    // scanf("%s", n);
    // length=strlen(n);

    // for(int i=0; i<length; ++i)
    // {
    //     if(n[i]-'0'==9) ++arr[6];
    //     ++arr[n[i]-'0'];
    // }
    //
    // arr[6]=ceil(arr[6]/2.0);
    // for(int i=0; i<9; ++i)
    // {
    //     if(m<arr[i])    m=arr[i];
    // }
    // printf("%d\n", m);
// }
