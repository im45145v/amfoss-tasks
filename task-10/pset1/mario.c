#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height=get_int("height:");
    }
    while(height >= 1 && height <= 1);
    for(int row=1; row <= height;row++)
    {
        for(int k=1;k <= height-row;k++)
        {
            printf("");
        }
        for(int j=1;j<= row;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
