/*
ACMICPC 11720
Find the sum of each number given in a string.
*/

int main()
{
    int t, sum=0;
    char num[100] = {0, };
    scanf("%d\n", &t);
    scanf("%s", num);
    for(int i=0; i<t; ++i)
    {
        sum += (num[i]-'0'); //turn char into a integer (-'0')
    }
    printf("%d\n", sum);
}
