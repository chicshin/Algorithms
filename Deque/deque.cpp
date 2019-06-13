/*
ACMICPC #10866
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

int main()
{
	int n, deq[30000], head = 11000, tail = 11000, b;
	char s[20];
	scanf("%d\n", &n);
	while(n--){
		scanf("%s", s);
		if(s[0] == 'f') // front
			printf("%d\n", head == tail ? -1 : deq[head]);
		else if(s[0] == 'b') // back
			printf("%d\n", head == tail ? -1 : deq[tail-1]);
		else if(s[0] == 'e') // empty
			printf("%d\n", head == tail ? 1 : 0);
		else if(s[0] == 's') // size
			printf("%d\n", tail-head);
		else if(s[4] == 'f'){ // pop_front
			if(head == tail)
				printf("-1\n");
			else
				printf("%d\n", deq[head++]);
		}
		else if(s[4] == 'b'){ // pop_back
			if(head == tail)
				printf("-1\n");
			else
				printf("%d\n", deq[--tail]);
		}
		else if(s[5] == 'f'){ // push_front
			scanf("%d\n", &b);
			deq[--head] = b;
		}
		else{ // push_back
			scanf("%d\n", &b);
			deq[tail++] = b;
		}
	}
	return 0;
}


/*
solution 2
*/
int main()
{
    int T; scanf("%d", &T);
    // string s;
    char s[11];
    deque<int> dq;
    int x;
    while(T--) {
        scanf("%s", s);
        if(!strcmp(s, "push_front")) {
            scanf("%d", &x);
            dq.push_front(x);
        }
        else if(!strcmp(s, "push_back")) {
            scanf("%d", &x);
            dq.push_back(x);
        }
        else if(!strcmp(s, "pop_front")) {
            printf("%d\n", dq.empty() ? -1 : dq.front());
            if(!dq.empty()) dq.pop_front();
        }
        else if(!strcmp(s, "pop_back")) {
            printf("%d\n", dq.empty() ? -1 : dq.back());
            if(!dq.empty()) dq.pop_back();
        }
        else if(!strcmp(s, "size")) {
            printf("%lu\n", dq.size());
        }
        else if(!strcmp(s, "empty")) {
            printf("%d\n", dq.empty());
        }
        else if(!strcmp(s, "front")) {
            printf("%d\n", dq.empty() ? -1 : dq.front());
        }
        else if(!strcmp(s, "back")) {
            printf("%d\n", dq.empty() ? -1 : dq.back());
        }
    }
}
