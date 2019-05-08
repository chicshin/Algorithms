/*
    6.2
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;

int n;
bool areFriends[10][10];

void init_areFriends(){
    for(size_t i = 0; i < 10; i++)
    {
        for(size_t j = 0; j < 10; j++)
        {
            areFriends[i][j] = false;
        }
    }
}

int countPairings(bool taken[10], size_t stu_num)
{
    int firstFree=-1;
    for(int i=0; i<stu_num; ++i)
    {
        if(!taken[i])
        {
            firstFree=i;
            break;
        }
    }

    if(firstFree==-1) {return 1;}

    int ret=0;

    for(int pairWith=firstFree+1; pairWith<stu_num; ++pairWith)
    {
        if(!taken[pairWith] && areFriends[firstFree][pairWith])
        {
            taken[firstFree]=taken[pairWith]=true;
            ret+=countPairings(taken, stu_num);
            taken[firstFree]=taken[pairWith]=false;
        }
    }
    return ret;
}

int main(void)
{
    cin>>n;
    bool taken[10]={false, };
    for(int i=0; i<n; ++i)
    {
        init_areFriends();
        int students, pairs;
        cin>>students;
        cin>>pairs;
        for(int p=0; p<pairs; p++)
        {
            int first;
            int second;
            cin>>first>>second;
            areFriends[first][second]=true;
            areFriends[second][first]=true;
        }
        cout<<countPairings(taken, students)<<endl;
        // for(int j=0; j<students; ++j)
        //     for(int k=0; k<students; ++k)
        //     {
        //         cout<<areFriends[j][k]<<" "<<endl;
        //     }
    }
    return 0;
}
