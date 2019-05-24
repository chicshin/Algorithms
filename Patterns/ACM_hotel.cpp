/*
ACMICPC #10250
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int X=ceil(double(N)/H);
        int Y=N%H;
        if(Y==0)    {Y=H;}
        if(X<10)    {printf("%d0%d\n", Y, X);}
        else    {printf("%d%d\n", Y, X);}
        //printf("%d\n", !(n%h) ? h * 100 + n / h : (n%h) * 100 + n / h + 1);
    }
}
