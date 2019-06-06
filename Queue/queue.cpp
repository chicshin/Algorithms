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
