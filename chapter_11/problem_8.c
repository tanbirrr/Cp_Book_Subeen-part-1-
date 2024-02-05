#include<stdio.h>
int main()
{
    int table[5][5]={{6,4,7,8,9},
                     {3,7,1,9,9},
                     {8,6,4,2,7},
                     {2,4,2,5,9},
                     {4,1,6,7,3}
                     };
     int col,row,col_sum;
    

     for(row=0; row<5; row++)
     {
        col_sum=0;
        for(col=0; col<5; col++)
        {
            col_sum+= table[col][row];
        }
        printf("sum of column %d: %d\n",col+1,col_sum);
     }
     return 0;                
}