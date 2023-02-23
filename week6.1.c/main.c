#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    int i ;
    printf("enter the string :");
    scanf("%s",a);

    for (i=0;i<strlen(a);i++)
    {
        if (a[i]>='a'&&a[i]<='z')
        {
            a[i] = a[i] -32 ;
        }
        else if (a[i]>='A'&&a[i]<='Z')
        {
            a[i] = a[i]+32 ;
        }
    }
    printf("%s",a);

    return 0;
}
