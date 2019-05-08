/*
    Sum of 1 to N.
    Divide & Conquer
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;

int fastSum(int n)
{
    if(n==1) {return 1;}
    if(n%2==1) {return fastSum(n-1)+n;}
    return 2 * fastSum(n/2) + (n/2) * (n/2);
}

int main(void)
{
    cout<<fastSum(10)<<endl;
    return 0;
}
