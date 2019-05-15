/*
ACMICPC #2908
Find the largest reversed number.
input>> 734 893
output>> 437 (437>398)
*/

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int a,b;

    scanf("%d %d", &a, &b);
    a = a % 100 + a % 10 * 99 + a / 100;
    b = b % 100 + b % 10 * 99 + b / 100;
    printf("%d", a > b ? a : b);

    // for(int i=0; i<2; ++i)
    // {
    //     scanf("%d", &num);
    //     a=num%10;
    //     num=num-a;
    //     b=num%100;
    //     num=num-b;
    //     c=num%1000;
    //     new_num=(a*100)+b+(c/100);
    //     arr.push_back(new_num);
    //     m=*max_element(arr.begin(), arr.end());
    // }
    // printf("%d\n", m);
}
