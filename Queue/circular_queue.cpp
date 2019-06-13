/*
ACMICPC #11866
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

int main() {
    int N, M; scanf("%d %d", &N, &M);
    queue<int> Q;
    for (int i = 1; i <= N; i++) Q.push(i);
    printf("<");
    while (!Q.empty()) {
        for (int i = 0; i < M-1; i++) {
            Q.push(Q.front());
            Q.pop();
        }
        printf("%d", Q.front());
        Q.pop();
        if (!Q.empty()) printf(", ");
    }
    printf(">");
}
