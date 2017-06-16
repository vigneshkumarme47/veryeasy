#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int a,b;
    scanf("%li ",&a);
    scanf("%li \n",&b);
    if(a<b)
    printf("%li",a);
    else if(a>b)
    printf("%li",b);
    else
    printf("EQUAL");


}
