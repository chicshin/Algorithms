/*
2019 Kickstart Round C #1
Wiggle Walk
*/
#include <bits/stdc++.h>
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")

#define fi first
#define se second

const int N = 100100;
const int MAGIC = 130;

using namespace std;

int n;
map < pair < int, int >, bool > used;
map < pair < int, int >, pair < int, int > > d[4];

pair < int, int > get(pair < int, int > x, int g)
{
        if(d[g].find(x) == d[g].end())
        {
            // cout << "x.first: " << x.first << " x.sec: " << x.second << endl;
            d[g][x] = x;
            if(g == 0){
                    d[g][x].se -= 1;
            } else if(g == 1){
                    d[g][x].fi += 1;
            } else if(g == 2){
                    d[g][x].se += 1;
            } else{
                    d[g][x].fi -= 1;
            }
            // cout << "First = " << d[g][x].fi << " Second = " << d[g][x].se <<endl;
        }

        // if not marked
        // mark visited
        if(used.find(d[g][x]) == used.end())
        {
            cout<<"Mark: "<< d[g][x].fi << " " << d[g][x].se << endl;
            return d[g][x];
        }

        // if visited
        // call get() recursion
        cout << "Going through " << d[g][x].fi << " " << d[g][x].se << endl;
        return d[g][x] = get(d[g][x], g);

}

void solve()
{
        used.clear();
        for(int i = 0; i < 4; i++)d[i].clear();
        int x, y;
        cin >> n >> x >> y >> x >> y;
        pair < int, int > res(x, y);
        used[res] = 1;
        for(int i = 1; i <= n; i++){
                char c;
                cin >> c;
                int g = 0;
                if(c == 'S'){
                        g = 1;
                } else if(c == 'E'){
                        g = 2;
                } else if(c == 'N'){
                        g = 3;
                }
                res = get(res, g);
                // cout << "used = " << res.fi << " " << res.se << endl;
                used[res] = 1;
        }
        cout << res.fi << " " << res.se << "\n";
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
