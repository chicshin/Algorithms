/*
ACMICPC #4344
Find the ratio of number of students with scores above average.
*/

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int test_case;
    scanf("%d", &test_case);
    for(int i=0; i<test_case; ++i)
    {
        int students, sum=0;
        scanf("%d ", &students);

        int s[students+1];

        for(int j=0; j<students; ++j)
        {
            scanf("%d", &s[j]);
            sum+=s[j];
        }
        double avg=sum/students;

        double count=0;
        for(int j=0; j<students; ++j)
        {
            if(s[j]>avg) ++count;
        }

        printf("%.3f%%\n", (count*100)/students);
    }
}

// for(int j=0; j<students; ++j)
// {
//     scanf("%d", &scores);
//     list[j]=scores;
//     sum+=scores;
// }
