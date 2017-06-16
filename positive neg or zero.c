#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int a;
    scanf("%li \n",&a);
    if(a>0)
    printf("positive");
    else if(a<0)
    printf("negative");
    else
    printf("zero");
}
