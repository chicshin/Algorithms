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

#define MAX_LEN 50

using namespace std;

int n;
char s[51];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        int c = 0;
        for (int j = 0; s[j] && c >= 0; j++) s[j] == '(' ? c++ : c--;
        printf("c=%d\n", c);
        puts(c ? "NO" : "YES");
    }
    return 0;
}
//solution 2
// void check(string str) {
//     int top=0;
//     int len=str.length();
//     for(int i=0; i<len; ++i) {
//         if(str[i]=='(') {
//             ++top;
//         }
//         else {--top;}
//         if(top<0) {
//             printf("NO\n");
//             break;
//         }
//     }
//     if(top==0) {
//         printf("YES\n");
//     }
//     else if(top>0) {
//         printf("NO\n");
//     }
// }
// int main()
// {
//     int T;
//     scanf("%d", &T);
//     while(T--) {
//         char str[51];
//         scanf("%s", str);
//         check(str);
//     }
// }
