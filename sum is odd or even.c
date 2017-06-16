#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d \n",&a);
    scanf("%d \n",&b);
    c=a+b;
    if(c%2==0)
    printf("even");
    else
    printf("odd");
    return 0;
}
