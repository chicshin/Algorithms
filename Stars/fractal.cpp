/*
ACMICPC #2448

N=3*2^k
(3,6,12,24,48...)
                       *
                      * *
                     *****
                    *     *
                   * *   * *
                  ***** *****
                 *           *
                * *         * *
               *****       *****
              *     *     *     *
             * *   * *   * *   * *
            ***** ***** ***** *****
           *                       *
          * *                     * *
         *****                   *****
        *     *                 *     *
       * *   * *               * *   * *
      ***** *****             ***** *****
     *           *           *           *
    * *         * *         * *         * *
   *****       *****       *****       *****
  *     *     *     *     *     *     *     *
 * *   * *   * *   * *   * *   * *   * *   * *
***** ***** ***** ***** ***** ***** ***** *****
*/
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> table;

void solve(int n, int start, int end,int top) {
    if (n/3 == 1) {
        table[top][start + (end - start) / 2 - 1] = '*';
        table[top + 1][start + 1] = '*';
        table[top + 1][start + 3] = '*';
        for (int i = 0; i < 5; i++) {
            table[top + 2][start + i] = '*';
        }
        return;
    }
    solve(n / 2, start + (end - start) / 4, start + (end - start) / 4 * 3, top);
    solve(n / 2, start, start + (end - start) / 2, top + n / 2 );
    solve(n / 2, start + (end - start) / 2, end, top + n / 2 );
}

int main() {
    int n;
    cin >> n;
    table.assign(n, string(n * 2 - 1, ' '));
    solve(n,0,2*n,0);
    for (int i = 0; i < table.size(); i++) {
        cout << table[i];
        printf("\n");
    }
    return 0;
}

//solution 2
// #include <iostream>
// #include <string>
//
// using namespace std;
//
// string str = "  *  \n * * \n*****";
// string t = "   ";
// int l = 3;
//
// void tri() {
// 	string a = "";
// 	int s = (str.length() - (l - 1)) / l;
// 	for (int i = 0; i < l; i++) {
// 		a += t + str.substr(s * i + i, s) + t + "\n";
// 	}
//
// 	for (int i = 0; i < l; i++) {
// 		a += str.substr(s * i + i, s) + " " + str.substr(s * i + i, s) + "\n";
// 	}
//
//
// 	t = t + t;
// 	l = l + l;
//
// 	str = a;
// }
//
// int main() {
// 	int n;
// 	cin >> n;
// 	n /= 6;
// 	while (n > 0) {
// 		tri();
// 		n /= 2;
// 	}
//
// 	cout << str;
//
// 	return 0;
// }

//solution3
// #include <cstdio>
// #include <string>
// using namespace std;
//
// string chunk[3] = {
//     "  *  ",
//     " * * ",
//     "*****",
// };
//
// void proc() {
//     int n, m;
//     scanf("%d", &n);
//     m = n / 3;
//
//     string s;
//
//     for (int i = 0; i < m; ++i) {
//         for (int k = 0; k < 3; ++k) {
//             for (int j = 0; j < m - i - 1; ++j) s += "   ";
//
//             for (int j = 0; j <= i; ++j) {
//                 if ((i | j) == i) {
//                     s += chunk[k];
//                 }
//                 else {
//                     s += "     ";
//                 }
//                 s += ' ';
//             }
//
//             for (int j = 0; j < m - i - 1; ++j) s += "   ";
//             s += '\n';
//         }
//     }
//
//     puts(s.c_str());
// }
//
// int main() {
//     proc();
//     return 0;
// }
