/*
    Insertion Sort
    O(N^2)
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;

void insertionSort(vector<int>& A)
{
    for (int i=0; i<A.size(); i++)
    {
        int j=i;
        while(j>0 && A[j]<A[j-1])
        {
            swap(A[j], A[j-1]);
            --j;
        }
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

    insertionSort(list);
    for(int i=0; i<list.size(); i++)
        cout<<list[i]<<" ";
    cout<<endl;
    return 0;
}
