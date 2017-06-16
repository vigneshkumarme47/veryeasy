#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,gsi,indhiran,kodai=2000;
    scanf("%d",&indhiran);
    if(indhiran>kodai)
    {
        gsi=(indhiran-(indhiran/10));
        printf("%d",gsi);
    }
    else
    printf("%d",indhiran);


}
