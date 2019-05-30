/*
Quicksort
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

#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

using namespace std;

int list[10000000];
int partition(int list[], int left, int right)
{
    int pivot=list[left], tmp, low=left, high=right+1;

    do{
        do
        low++;
        while(low<=right && list[low]<pivot);

        do
        high--;
        while(high>=left && list[high]>pivot);
        if(low<high) SWAP(list[low], list[high], tmp);
    }while(low<high);

    SWAP(list[left], list[high], tmp);
    return high;
}
void quick_sort(int list[], int left, int right)
{
    if(left<right)
    {
        int q=partition(list, left, right);
        quick_sort(list, left, q-1);
        quick_sort(list, q+1, right);
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &list[i]);
    }
    quick_sort(list, 0, T-1);
    for (int i = 0; i < T; i++)
        printf("%d\n", list[i]);
}
