#include<stdio.h>
int main()
{
 int row, col;
 for(row=6; row>=1; row--)
  {
    for(col=1; col<=7-row; col++)
  {
 printf(" ");

  }
 
 for(col=1; col<=2*row-1; col++)

{
 printf("C");

}
 printf("\n");

}
 for(row=2; row<=6; row++)

{
 for(col=1; col<=7-row; col++)

{
 printf(" ");

}
 for(col=1; col<=2*row-1; col++)

{
 printf("C");

}
 printf("\n");

}
 return 0;

 }
