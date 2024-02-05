#include<stdio.h>

int main()
{
    int row,col,j=18;

    for(row=1; row<=10; row++)
    {
        int i=1;

        while(i<=row)
        {
            printf("C");
            i++;
        }
        for(col=1; col<=j; col++)
        {
            printf(" ");
        }

        i=1;

        while(i<=row)
        {
            printf("C");
            i++;
        }
        j-=2;
        printf("\n");
    }
    return 0;
}