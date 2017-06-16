#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,k=0;
    scanf("%d\n%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        k=k+i;
    }
    printf("%d",k);


}
