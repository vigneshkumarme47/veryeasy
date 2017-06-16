#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,b,n,k=0;
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10;
    a=a/10;
    if(b%2!=0)
    k=b+k;
    }
    printf("%d",k);


}
