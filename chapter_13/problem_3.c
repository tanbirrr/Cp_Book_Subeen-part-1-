#include<stdio.h>

int main()
{
    int row,col;
    for(row=1; row<=7; row++)
    {
        for(col=1; col<=row-1; col++)
        {
            printf(" ");
        }

        for(col=row; col<=7; col++)
        {
            printf("C");
        }
        printf("\n");
    }


    for(row=7; row>=1; row--)
    {
        for(col=1; col<=row-1; col++)
        {
            printf(" ");
        }

        for(col=row; col<=7; col++)
        {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}