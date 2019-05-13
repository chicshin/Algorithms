/*
ACMICPC #1157
note:
Avoid using strlen() inside for-loops.
Calculate length of string before apply it.
*/

#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    char s[1000001];
    int idx=0, max=0, ascii, count=0, length=0;
    int list[26]={0,};
    scanf("%s", s);
    length=strlen(s);

    for(int i=0; i<length; ++i)
    {
        if(s[i]>='a')
        {
            ascii=s[i]-'a';
        }
        else
        {
            ascii=s[i]-'A';
        }
        ++list[ascii];
    }

    //begin(), end() only have usage in vectors.
    // m=*max_element(list.begin(), list.end());

    for(int i=0; i<26; ++i)
    {
        if(max<list[i])
        {
            max=list[i];
            idx=i;
        }
    }
    for(int i=0; i<26; ++i)
    {
        if(max==list[i])
        {
            ++count;
        }
    }

    if(count>1)
    {
        printf("?\n");
    }
    else
    {
        printf("%c\n", idx+65);
    }
}
