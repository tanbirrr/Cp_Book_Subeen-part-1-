#include<stdio.h>
int main()
{
    int row,col;

    for(row=7; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("C");
        }
        printf("\n");
    }

    for(row=1; row<=7; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}