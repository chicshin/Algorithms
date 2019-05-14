/*
ACMICPC #1316
input>>'abc' is word
input>>'abca' isn't word
*/

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
// #define MAX 100

using namespace std;

int ch[400], c;
char word[101], tmp;
int main()
{
    int test_case, i, j, t;
    scanf("%d", &test_case);
    for(t=0; t<test_case; ++t)
    {
        scanf("%s", word);
        for(i=0; word[i]; ++i)
        {
            if(word[i]!=tmp && ch[word[i]]!=0)
            {
                // printf("\nword[i]=%c tmp=%c\n", word[i], tmp);
                break;
            }
            ++ch[word[i]];
            tmp=word[i];
            if(word[i+1]==0)
            {
                // printf("\nword[i]=%c", word[i]);
                // printf("\nword[i+1]=%c", word[i+1]);
                ++c;
            }
            // printf("\ntmp before: %c", tmp);
        }
        tmp=0;
        for(j='a';j<='z';j++)
        {
            ch[j]=0;
        }
        printf("%d\n", c);
        // printf("\ntmp after: %d\n", tmp);
        // for(j=0; j<400; ++j)
        //     printf("%d ", ch[j]);
    }
}

// int main()
// {
//     char string[MAX];
//     bool group=true;
//     int test_case, i, j, length, count=0, ascii;
//     scanf("%d", &test_case);
//     for(i=0; i<test_case; ++i)
//     {
//         vector<char> item;
//         int list[26]={0,};
//         scanf("%s", string);
//         length=strlen(string);
//
//         for(j=0; j<length; ++j)
//         {
//             item.push_back(string[j]);
//             if(string[j]==item.back())
//             {
//                 item.pop_back();
//             }
//             if(string[j]!=item.back())
//             {
//                 item.push_back(string[j]);
//             }
//         }
//         for(j=0; j<item.size(); ++j)
//         {
//             ascii=item[j]-'a';
//             ++list[ascii];
//         }
//         for(j=0; j<26; ++j)
//         {
//             if(list[j]>1)
//             {
//                 group=false;
//                 break;
//             }
//             else
//             {
//                 group=true;
//             }
//         }
//         if(group)
//         {
//             ++count;
//         }
//
//     }
//     printf("%d\n", count);
// }
