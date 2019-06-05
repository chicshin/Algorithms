/*
ACMICPC #2504
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

char s[31];
stack<char> box;

int main() {
    int c=0, b=0, v=1, res=0, i=0;
    char now;
    for(scanf("%s", s); s[i] && c >= 0 && b >= 0; ++i) {
        now = s[i];
        s[i]=='('? c++, v*=2: s[i]=='['? b++, v*=3: s[i]==']'? b--: c--;

        if(now=='('){box.push(now);if(s[i+1]==')') res+=v;}
        else if(now=='[') {box.push(now); if(s[i+1]==']') res+=v;}
        else if(now==')' && !box.empty()) { box.pop(); v/=2; }
        else if(now==']' && !box.empty()) { box.pop(); v/=3; }
    }
    c || b ? printf("0\n") : printf("%d\n", res);;
}
