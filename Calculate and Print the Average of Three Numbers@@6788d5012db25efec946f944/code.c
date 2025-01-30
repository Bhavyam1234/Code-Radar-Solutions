#include <stdio.h>
int main()
{
    int a,b,c;
    float average;
    scanf("%d%d%d\n",&a,&b,&c);
    float average=a+b+c/3.0;
    printf("average: %.2f",average);
    return 0;
}