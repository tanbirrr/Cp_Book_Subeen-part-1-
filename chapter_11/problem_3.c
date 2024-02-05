#include<stdio.h>
int main()
{
    int namta[10][10];
    int row,col;
    int evenCount=0;
    int oddCount=0;
    int sum=0;

    for(row=0; row<10; row++)
    {
        for(col=0; col<10; col++)
        {
            namta[row][col]= (row+1) * (col+1);
            sum+=namta[row][col];

            if(namta[row][col] % 2 ==0) evenCount++;
            else oddCount++;
        }
    }
    printf("Total even numbers: %d\n",evenCount);
    printf("Total odd numbers: %d\n",oddCount);
    printf("Sum of all numbers: %d\n",sum);

    return 0;
} 