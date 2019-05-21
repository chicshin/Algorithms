/*
ACMICPC #10039
Students who have scores below 40 will take 40.
Find the average scores of five stuents.
*/
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int i,sum=0,a;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a);
        sum+=(a>=40)?a:40;
    }
    printf("%d\n",sum/5);
}

// int main()
// {
//     int total=0;
//     for(int t=0; t<5; ++t)
//     {
//         int scores;
//         scanf("%d", &scores);
//         if(scores<40) scores=40;
//         total+=scores;
//     }
//     printf("%d\n", total/5);
// }
