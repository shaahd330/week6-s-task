#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char str [50];
    int alph=0 , digit=0 , schar=0 , i=0 ;
    printf("enter the string :");
    scanf("%s",str);
    while (str != '\0')
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            alph++ ;
        }
        else if (str[i]>='0'&&str[i]<='9')
        {
            digit++;
        }
        else
        {
            schar ++ ;
        }
        i++;
    }

    printf("number of alphabits is  : %d",alph);

       printf("number of digits is  : %d",digit);
       printf("number of special characters is  : %d",schar);
       printf("number of special characters is  : %d",schar);





    return 0;
}
