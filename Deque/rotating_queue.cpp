/*
ACMICPC #1021

rotate(swap_start, swap_end, end)

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
#include <deque>

using namespace std;

int main() {
    int N, M; scanf("%d %d", &N, &M);
    int a, cnt=0;
    deque<int> dq;

    for(int i=1; i<=N; ++i) dq.push_back(i);
    for(int i=0; i<M; ++i) {
        scanf("%d", &a);
        for(int p=0; p<N; p++) {
            if(dq[p]==a) {
                cnt+=min(p, N-p);
                rotate(dq.begin(), dq.begin()+p+1, dq.end()-i);
                break;
            }
        }
        N--;
    }
    printf("%d\n", cnt);
}
