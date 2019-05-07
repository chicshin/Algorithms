/*
    Create arrays which contain length of m with consecutive n numbers.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;

void printPicked(vector<int>& arr)
{
    for(int i=0; i<arr.size(); ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<", ";
}

void pick(int n, vector<int>& picked, int toPick)
{
    if(toPick==0)
    {
        printPicked(picked);
        return;
    }

    int smallest=picked.empty() ? 0: picked.back()+1;
    for(int next=smallest; next<n; ++next)
    {
        picked.push_back(next);
        pick(n, picked, toPick-1);
        picked.pop_back();
    }
}

int main(void)
{
    vector<int> arr;
    pick(7, arr, 4);
    return 0;
}
