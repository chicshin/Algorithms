/*
ACMICPC #1260
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
const int MAX = 1001;

bool visit[MAX];
vector<int> l[MAX];
queue<int> Q;

void DFS(int x) {
    visit[x]=true;
    printf("%d ", x);
    for(int y : l[x]) {
        // printf("y=%d\n", y);
        if(!visit[y]) DFS(y);
    }
}

void BFS(int sx) {
    Q.push(sx);
    visit[sx]=true;
    while(!Q.empty()) {
        // printf("is empty? %d\n", Q.empty());
        int x = Q.front();
        Q.pop();
        printf("%d ", x);
        for(int y : l[x]) {
            // printf("y=%d\n", y);
            if(!visit[y]) {
                // printf("queue = %d\n", y);
                Q.push(y);
                visit[y]=true;
            }
        }
    }
}
int main() {
    int n, m, v; scanf("%d %d %d", &n, &m, &v);
    while(m--) {
        int s, e; scanf("%d %d", &s, &e);
        l[s].push_back(e);
        l[e].push_back(s);
    }
    for(int i=0; i<=n; ++i) {
        sort(l[i].begin(), l[i].end());
    }
    DFS(v);
    puts("");
    memset(visit, 0, sizeof(visit));
    BFS(v);
    puts("");
}
/*

** print contents in vector **

vector<int>::iterator it;
for(it=l[s].begin(); it<l[s].end(); ++it)
    printf("%d ", *it);
printf("\n");
*/
