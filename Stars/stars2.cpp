/*
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>

int main()
{
    int a, i, j, n=1;
    scanf("%d", &a);
    for(i=1; i<=a; ++i)
    {
        for(j=0; j<n-1; ++j)
        {
            printf(" ");
        }
        for(j=a;j>=i; --j)
        {
            printf("*");
        }
        ++n;
        printf("\n");
    }
}
