/*
*
**
***
****
*****
*/

#include <stdio.h>
int main()
{
    int a, i, j, n=1;
    scanf("%d", &a);
    for(i=1; i<=a; ++i)
    {
        for(j=0; j<a-n; ++j)
        {
            printf(" ");
        }
        for(j=0; j<n; ++j)
        {
            printf("*");
        }
        ++n;
        printf("\n");
    }
}
