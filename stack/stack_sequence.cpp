/*
ACMICPC #1874
*/
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <numeric>
#include <typeinfo>

int arr[100010] = { 0 };
char output[400010] = { 0 };
int outIdx = 0;

int main() {
	int input;
	int stack = 1, idx = 0;
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &input);

		for (; stack <= input; stack++) {
			arr[idx++] = stack;
			output[outIdx++] = '+';
            output[outIdx++] = '\n';
            // printf("stack=%d\n", stack);
		}
        printf("first index= %d\n", arr[idx]);
		if (arr[--idx] == input) {
            // printf("after= %d\n", arr[idx]);
			output[outIdx++] = '-'; output[outIdx++] = '\n';
            // printf("idx--=%d\n", idx);
            // printf("arr[idx]=%d\n", arr[idx]);
		}
		else {
			printf("NO\n");
			return 0;
		}
	}

	printf("%s", output);

	return 0;
}
