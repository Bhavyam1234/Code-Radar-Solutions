#include <stdio.h>

int main()
{
    char name[100];
    char age[100];
    char hobby[100];
    scanf("%s%s%s",&name,&age,&hobby);
    printf("Name:%s\nAge: %s\nHobby:%s\n",name,age,hobby);
    return 0;
}