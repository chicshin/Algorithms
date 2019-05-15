/*
ACMICPC #1546
Divide each score with the maximum value.
Find the average of the new scores.
*/

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, score, s;
    double m=0;
    scanf("%d", &n);

    for(i=0; i<n; ++i)
    {
        scanf("%d", &score);
        if(score>m) {m=score;}
        s+=score;
    }
    printf("%f\n", (s*100)/(m*n));
}

using namespace std;

// int scores[1000];
// int main()
// {
//     int n, i;
//     double new_score, m, sum;
//     scanf("%d", &n);
//
//     for(i=0; i<n; ++i)
//     {
//         scanf("%d", &scores[i]);
//     }
//     m=*max_element(scores, scores+n);
//     for(i=0; i<n; ++i)
//     {
//         new_score=(scores[i]/m)*100;
//         sum+=new_score;
//     }
//     printf("%f\n", sum/n);
// }
