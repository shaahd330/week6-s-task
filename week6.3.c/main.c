#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    printf("enter the string to be reversed : ");
    scanf("%s",str);
    for(int i = strlen(str)-1; i >= 0 ; i --)
    {
        printf("%c",str[i]);
    }
    return 0;
}
