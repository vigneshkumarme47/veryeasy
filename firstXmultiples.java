#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,b,k=0,s=0;
    scanf("%d\n%d",&a,&b);
    for(i=1;i<=b;i++)
    {   
            k=a*i;
            printf("%d\t",k);    
    }

}
