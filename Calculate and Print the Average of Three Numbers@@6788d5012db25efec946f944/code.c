#include <stdio.h>
int main()
{
    int a,b,c;
    float d;
    scanf("%d%d%d\n",&a,&b,&c);
    float d=a+b+c/3.0;
    printf("Average: %.2f",d);
    return 0;
}