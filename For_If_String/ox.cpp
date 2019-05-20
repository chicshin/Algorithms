#include <stdio.h>
#include <string.h>

using namespace std;

int t;
char s[81];
int main() {
    scanf("%d", &t);
    while (t--) {
        int r = 0,c=0;
        scanf("%s", s);
        for (int i = 0; s[i]; i++) s[i] == 'O' ? r += ++c : c = 0;
        printf("%d\n", r);
    }
    return 0;
}

//solution2
// int main()
// {
//     int test_case;
//     scanf("%d", &test_case);
//     while(t--)
//     {
//         char arr[81];
//         scanf("%s", arr);
//
//         int count=0, k=0;;
//         for(int j=0; arr[j]; ++j)
//         {
//             if(arr[j]=='O')
//             {
//                 count+=k;
//             }
//             else if(arr[j]=='X')
//             {
//                 count+=0;
//                 k=0;
//             }
//         }
//         printf("%d\n", count);
//     }
// }
