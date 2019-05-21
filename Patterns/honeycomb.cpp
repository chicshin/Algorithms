/*
ACMICPC #2292
Find the number of rooms from 1 to N.
*/
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int a, x, k=1, count=1;
    scanf("%d", &a);
    x=a/6;
    for(int i=0; i<=x; ++i,++count)
    {
        k=k+6*i;
        if(k>=a) break;
        // printf("k:%d count:%d\n", k, count);
    }
    printf("%d\n", count);
}
