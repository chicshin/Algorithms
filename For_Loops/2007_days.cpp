/*
ACMICPC #1924
Find the day in 2007
*/
#include <stdio.h>

int main()
{
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int total_days=0;
    int m, d;

    scanf("%d %d", &m, &d);

    for(int i=1; i<m; ++i)
    {
        total_days+=month[i-1];
    }
    total_days+=d;

    switch(total_days % 7)
    {
        case 0: printf("SUN\n"); break;
        case 1: printf("MON\n"); break;
        case 2: printf("TUE\n"); break;
        case 3: printf("WED\n"); break;
        case 4: printf("THU\n"); break;
        case 5: printf("FRI\n"); break;
        case 6: printf("SAT\n"); break;
    }
}
