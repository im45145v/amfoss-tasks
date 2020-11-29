  
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    float rupees;
    do
    {
        rupees=get_float("Change owed:");
    }
    while(rupees<0);
    int cent=round(rupees*100);
    int coin=0;
    while(cent!=0){
        coin+=cent/25;
        cent=cent%25;
        coin+=cent/10;
        cent=cent%10;
        coin+=cent/5;
        cent=cent%5;
        coin+=cent/1;
        cent=cent%1;
    }
    printf("%d\n",coin);
}
