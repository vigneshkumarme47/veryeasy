#include<stdio.h>
#include <stdlib.h>

int main()
{
    long a,b,c,d;
    scanf("%li \n",&a);
    scanf("%li \n",&b);
    scanf("%li \n",&c);
    if(a>=b&&a>=c)
    {
    printf("%li",a);
    }
    else 
    {
        if (b>=a&&b>=c)
            printf("%li",b);
            else
            printf("%li",c);
    }    


}
