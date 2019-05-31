/*
ACMICPC #10828
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

using namespace std;

int main(){
    int n,l[10000]={},c=0;
    scanf("%d",&n);
    for(;n;n--){
    	char a[6];
    	scanf("%s",a);
    	switch(a[0]-a[1]){
    	case -5: /*push*/
    		int k;
    		scanf("%d",&k);
    		l[c++]=k;
    		break;
    	case 1: /*pop*/
    		printf("%d\n",c?l[c-1]:-1);
    		if(c>0)l[--c]=0;
    		break;
    	case 10: /*size*/
    		printf("%d\n",c);
    		break;
    	case -8: /*empty*/
    		printf("%d\n",!c);
    		break;
    	case 5: /*top*/
    		printf("%d\n",c?l[c-1]:-1);
    	}
    }
}

//soltion 2
// #define MAX_LEN 10000
// #define EMPTY -1
//
// typedef struct _stack {
//     int list[MAX_LEN];
//     int top;
// } Stack;
//
// void StackInit(Stack *sp) {
//     sp->top = -1;
// }
//
// int IsEmpty(Stack *sp) {
//     if(sp->top == -1)  return true;
//     return false;
// }
//
// int Size(Stack *sp) {
//     return sp->top+1;
// }
//
// int IsFull(Stack *sp) {
//     if(sp->top+1 >=MAX_LEN) return true;
//     return false;
// }
//
// void Push(Stack *sp, int data) {
//     if(IsFull(sp)) return;
//     sp->list[++(sp->top)] = data;
// }
//
// int Pop(Stack *sp) {
//     if(IsEmpty(sp)) return EMPTY;
//     return sp->list[(sp->top)--];
// }
//
// int Peek(Stack *sp) {
//     if(IsEmpty(sp)) return EMPTY;
//     return sp->list[sp->top];
// }
//
// int main()
// {
//     int T, num;
//     char s[6];
//     Stack stack;
//
//     scanf("%d", &T);
//     StackInit(&stack);
//
//     while(T--)
//     {
//         scanf("%s", s);
//
//         if(!strcmp(s, "push")) {
//             scanf("%d", &num);
//             Push(&stack, num);
//         }
//
//         else if(!strcmp(s, "pop")) {
//             printf("%d\n", Pop(&stack));
//         }
//
//         else if(!strcmp(s, "empty")) {
//             printf("%d\n", IsEmpty(&stack));
//         }
//
//         else if(!strcmp(s, "size")) {
//             printf("%d\n", Size(&stack));
//         }
//
//         else if(!strcmp(s, "top")) {
//             printf("%d\n", Peek(&stack));
//         }
//     }
// }
