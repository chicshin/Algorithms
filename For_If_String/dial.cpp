#include <stdio.h>

int alpha[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};

int main() {
    char dial[16];
    int s = 0;
    scanf("%s", dial);
    for (int i = 0; i < dial[i]; i++)
        s += alpha[dial[i] - 'A'] + 1;
    printf("%d", s);
}
