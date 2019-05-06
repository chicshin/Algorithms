/*
    Selection Sort
    O(N^2)
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;

void selectionSort(vector<int>& A)
{
    for(int i=0; i<A.size(); i++)
    {
        int minIndex=i;
        for(int j=i+1; j<A.size(); j++)
            if(A[minIndex]>A[j])
                minIndex=j;
        swap(A[i], A[minIndex]);
    }
}

int main(void)
{
    vector<int> list;
    list.push_back(4);
    list.push_back(8);
    list.push_back(1);
    list.push_back(3);
    list.push_back(7);

    selectionSort(list);
    for(int i=0; i<list.size(); i++)
        cout<<list[i]<<" ";
    cout<<endl;
    return 0;
}
