/*
ACMICPC #1110
input>>26
2+6=8
6+8=14
8+4=12
4+2=6 =>26
End of cycle.
*/

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n;
    int a, b, c, check;
    int count=0;
    scanf("%d", &n);
    check=n;
    while(check!=n || count==0)
    {
        a=check/10;
        b=check%10;
        c=(a+b)%10;
        a=b; b=c;
        check=a*10 + b;
        ++count;
    }
    printf("%d\n", count);

}
