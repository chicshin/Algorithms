/*
ACMICPC #2941
*/

#include <stdio.h>
#define c(c,d) a[i]==(c)&&a[i+1]==(d)

char a[101];
int r,i;

int main(){
	scanf("%s",a);
	for(;a[i]!='\0';++i,++r)
		if((c('c','='))||(c('c','-'))||(c('d','-'))||(c('l','j'))||(c('n','j'))||(c('s','='))||(c('z','=')))++i;
		else if(a[i]=='d'&&a[i+1]=='z'&&a[i+2]=='=')i+=2;
	printf("%d\n",r);
}

//solution2
// int main()
// {
//     char alph[101];
//     int i=0, count=0;
//     scanf("%s", alph);
//     int length=strlen(alph);
//
//     while(i<length)
//     {
//         if(alph[i]=='c' && (alph[i+1]=='=' || alph[i+1]=='-')) ++i;
//         else if(alph[i]=='d')
//         {
//             if(alph[i+1]=='-')  ++i;
//             else if(alph[i+1]=='z' && alph[i+2]=='=') i+=2;
//         }
//         else if((alph[i]=='l' || alph[i]=='n') && alph[i+1]=='j') ++i;
//         else if((alph[i]=='s' || alph[i]=='z') && alph[i+1]=='=') ++i;
//         ++i; ++count;
//     }
//     printf("%d\n", count);
// }
