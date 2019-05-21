/*
ACMICPC #2920
ascending/descending/mixed orders
*/

#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int n, i;
	bool a = true, d = true;

	for (i = 1;i <= 8;++i) {
		scanf("%d", &n);
		if (n != i)
			a = false;
		if (n != 9 - i)
			d = false;
	}

	printf("%s", a ? "ascending" : d ? "descending" : "mixed");
}

//solution 2
// enum {ASC=0, DESC, MIX};
// int main()
// {
//     int arr[8];
//     int result;
//     for(int i=0; i<8; ++i)
//     {
//         scanf("%d", &arr[i]);
//     }
//
//     if(arr[0]-arr[1]==-1) {result=ASC;}
//     else if(arr[0]-arr[1]==1) {result=DESC;}
//     else {result=MIX;}
//
//     for(int i=0; i<7; ++i)
//     {
//         if(arr[i]-arr[i+1]==-1 && result==ASC) {continue;}
//         else if(arr[i]-arr[i+1]==1 && result==DESC) {continue;}
//         result=MIX;
//         break;
//     }
//     if(result==ASC) {printf("ascending\n");}
//     else if(result==DESC) {printf("descending\n");}
//     else if(result==MIX) {printf("mixed\n");}
// }
