/*
ACMICPC #2675
Iterate each element in a string n times.
input>> '3 ABC'
out>> 'AAABBBCCC'
*/
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int test_case, n;
    char input[20];
    scanf("%d", &test_case);
    for(int i=0; i<test_case; ++i)
    {
        scanf("%d %s", &n, input);
        for(int j=0; input[j]!='\0'; ++j) //iterate until null found '\0'. strlen(input) caused compile error.
        {
            for(int k=0; k<n; ++k)
                printf("%c", input[j]);
        }
        printf("\n");
    }
}
