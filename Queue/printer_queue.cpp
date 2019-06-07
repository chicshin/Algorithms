/*
ACMICPC #1966
*/

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <numeric>
#include <typeinfo>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int testcase = 0; testcase < t; testcase++)
    {
        int N, M,cnt = 0;
        queue <pair<int, int> > q;
        priority_queue <int> pq;

        scanf("%d %d",&N,&M);
        for (int i = 0; i < N; i++)
        {
            int a;
            scanf("%d", &a);
            q.push(make_pair(i,a));
            pq.push(a);
        }

        while (!q.empty())
        {
            int nowidx = q.front().first;
            int nowval = q.front().second;
            q.pop();

            if (pq.top() == nowval)
            {
                pq.pop();
                cnt++;
                if (nowidx == M)
                {
                    printf("%d\n", cnt);
                    break;
                }
            }
            else {
                q.push(make_pair(nowidx,nowval));
            }
        }
    }
}
