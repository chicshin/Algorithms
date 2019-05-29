#include <bits/stdc++.h>
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
// -std=c++11
/*
Kickstart 2019 Round C #2
Circuit Board
3
1 4 0
3 1 3 3
2 3 0
4 4 5
7 6 6
4 5 0
2 2 4 4 20
8 3 3 3 12
6 6 3 3 3
1 6 8 6 4
*/

#define fi first
#define se second

const int N = 330;
const int MAGIC = 130;

using namespace std;

int n;
int m;
int k;
int p[N];
int s[N];
int a[N][N];
int r[N][N];

int get(int x)
{
        return p[x] == x ? x : p[x] = get(p[x]);
}

void solve()
{
        cin >> n >> m >> k;
        for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                        cin >> a[i][j];
                }
        }
        for(int i = 1; i <= n; i++)
        {
            set < pair < int, int > > s;
            for(int j = m; j >= 1; j--)
            {
                if(j == m)
                {
                    r[i][j] = m;
                }
                else
                {
                    r[i][j] = r[i][j + 1];
                    // cout << " r[i][j] " << r[i][j] << endl;
                }
                // cout << "begin " << s.begin()->first << " a[i][j] = " << a[i][j] <<" "<< s.begin()->fi - a[i][j] << endl;
                while(!s.empty() && (abs((--s.end())->fi - a[i][j]) > k || abs(s.begin()->fi - a[i][j]) > k))
                {
                    cout << i << " " << j << endl;
                    cout << "a = " << a[i][r[i][j]] << " r = " << r[i][j] << endl;
                    s.erase({a[i][r[i][j]], r[i][j]});
                    cout << "begin = " << s.begin()->first << " a[i][j] = " << a[i][j] <<" result = "<< s.begin()->fi - a[i][j] << endl;

                    r[i][j]--;
                    cout << "r[i][j]-- = " << r[i][j] << endl;
                    cout << endl;

                    cout << s.empty() << endl;
                }
                cout << endl;
                cout << "Insert a = " << a[i][j] << " j = " << j <<endl;
                s.insert({a[i][j], j});
            }
        }
        int res = 0;
        vector < pair < int, int > > v;
        for(int j = 1; j <= m; j++){
                v.clear();
                for(int i = 1; i <= n; i++){
                        v.push_back({r[i][j], i});
                        s[i] = 1;
                        p[i] = 0;
                }
                sort(v.begin(), v.end());
                reverse(v.begin(), v.end());
                for(auto t: v){
                        int x = t.se;
                        p[x] = x;
                        if(x > 1 && p[x - 1]){
                                int y = get(x - 1);
                                p[y] = x;
                                s[x] += s[y];
                        }
                        if(x < n && p[x + 1]){
                                int y = get(x + 1);
                                p[y] = x;
                                s[x] += s[y];
                        }
                        res = max(res, s[x] * (t.fi - j + 1));
                }
        }
        cout << res << "\n";
}

int main()
{
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
        ios_base::sync_with_stdio(0);

        int T;
        cin >> T;
        for(int i = 1; i <= T; i++){
                cout << "Case #" << i << ": ";
                solve();
        }
}
