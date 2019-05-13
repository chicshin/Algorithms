/*
ACMICPC #10809
Find indices of each alphabet given in a string.
If the alphabet not found print -1.
e.g.
input>> 'janeshin'
output>> 1 -1 -1 -1 3 -1 -1 5 6 0 -1 -1 -1 2 -1 -1 -1 -1 4 -1 -1 -1 -1 -1 -1 -1
*/

#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    char input[100];
    scanf("%s", input);

    string str(input);
    for(int i=0; i<26; ++i)
    {
        printf("%d ", int(str.find('a'+i)));
    }
}
