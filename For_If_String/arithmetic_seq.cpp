/*
ACMICPC #1065
N=103
a[0]=3 a[1]=0 a[2]=1
arr[0]-arr[1]!=arr[1]-arr[2]

Count the numbers with arr[0]-arr[1]==arr[1]-arr[2].

note:
1~10 and 10~100 has arthmetic sequence itself.
*/

#include <stdio.h>

using namespace std;

int countNum(int N)
{
    int arr[3]={0,};
    int count=0;
    for(int i=100; i<=N; ++i)
    {
        int temp=i;
        for(int j=0; j<3; ++j)
        {
            arr[j]=temp%10;
            temp=temp/10;
        }
        if(arr[0]-arr[1]==arr[1]-arr[2])    ++count;
    }
    return count;
}
int main()
{
    int num, result;
    scanf("%d", &num);

    if(num<100) result=num;
    else if(num==1000) result=144;
    else    result=countNum(num)+99;

    printf("%d\n", result);
}
