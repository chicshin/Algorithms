/*
    Board Cover
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;

const int coverType[4][3][2] =
{
    {{0,0}, {1,0}, {0,1}},
    {{0,0}, {0,1}, {1,1}},
    {{0,0}, {1,0}, {1,1}},
    {{0,0}, {1,0}, {1,-1}}
};

bool set(int board[][20], int y, int x, int H, int W, int type, int delta)
{
    bool ok=true;
    for(int i=0; i<3; i++)
    {
        const int ny = y + coverType[type][i][0];
        const int nx = x + coverType[type][i][1];
        cout<<"ny="<<ny<<", "<<"nx="<<nx<<endl;
        if(ny<0 || ny>=H || nx<0 || nx>=W)
            ok=false;
        else if((board[ny][nx] += delta) > 1)
            ok=false;
    }
    for(int k=0; k<H; ++k)
    {
        for(int m=0; m<W; ++m)
            cout<<board[k][m]<<" ";
        cout<<endl;
    }
    return ok;
}

int cover(int board[][20], int H, int W)
{
    int y=-1, x=-1;
    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
        {
            if(board[i][j]==0)
            {
                y=i;
                x=j;
                cout<<"y="<<y<<", "<<"x="<<x<<endl;
                break;
            }
        }
        if(y!=-1)
            break;
    }
    if(y==-1) { return 1; }
    int ret=0;
    for(int type=0; type<4; ++type)
    {
        if(set(board, y, x, H, W, type, 1))
            ret+=cover(board, H, W);
            cout<<"return "<<ret<<endl;
        set(board, y, x, H, W, type, -1);
    }
    return ret;
}

int main(void)
{
    int test_case, H, W;
    char bw[20];
    int board[20][20];
    cin>>test_case;
    for(int t=0; t<test_case; ++t)
    {
        cin>>H;
        cin>>W;
        for(int i=0; i<H; i++)
        {
            cin>>bw;
            for(int j=0; j<W; j++)
            {
                board[i][j]=(bw[j]=='#') ? 1: 0;
            }
        }
        cout<<cover(board, H, W)<<endl;
    }
    return 0;
}
