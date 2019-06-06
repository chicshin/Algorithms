/*
ACMICPC #10845
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

using namespace std;

int main()
{
	int n, p = 0, r = 0;
	int q[10000] = {};
	char s[6];

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		int x;

		scanf(" %s", s);

		switch (s[1]) {
		case 'u':
			scanf("%d", &x);
			q[r++] = x;
			break;
		case 'o':
            printf("pop=> p-r = %d\n", p-r);
			printf("%d\n", p-r ? q[p++] : -1);
            printf("p=%d r=%d\n", p, r);
			break;
		case 'i':
			printf("%d\n", r-p);
			break;
		case 'm':
			printf("%d\n", p==r);
			break;
		case 'r':
			printf("%d\n", p-r ? q[p] : -1);
			break;
		case 'a':
			printf("%d\n", p-r ? q[r-1] : -1);
			break;
		}
	}
}

/* solution 2 */
/*
int main() {
    int l[10001] = {}, c=0;
    int T; scanf("%d", &T);
    while(T--) {
        char s[6]; scanf("%s", s);
        switch(s[0]-s[2]) {
            case -3:
                int k; scanf("%d", &k);
                l[c++]=k;
                break;
            case 0:
                printf("%d\n", c? l[0] : -1);
                if(c>0) {
                    for(int i=1; i<c; ++i) {
                        l[i-1]=l[i];
                    }
                    c--;
                }
                break;
            case -7:
                printf("%d\n", c);
                break;
            case -11:
                printf("%d\n", c? 0 : 1);
                break;
            case -9:
                printf("%d\n", c? l[0] : -1);
                break;
            case -1:
                printf("%d\n", c? l[c-1] : -1);
        }
    }
}
*/
