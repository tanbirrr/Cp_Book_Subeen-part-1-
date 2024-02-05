#include<stdio.h>

int main()
{
    int x,y,grid[10][10],i,j,n;
    char c;

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            grid[i][j]=1;
        }
    }
    printf("please enter the number of blocked cells: ");
    scanf("%d",&n);

    printf("Now enter the cells: ");
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        grid[x][y]=0;
    }

    printf("please enter the initial position: ");
    scanf("%d %d",&x,&y);

    while(1)
    {
        scanf("%c",&c);

        if(c=='S')
        {
            break;
        }
        else if(c== 'U' && grid[x-1][y]==1)
        {
            x--;
        }
        else if(c== 'D' && grid[x+1][y]==1)
        {
            x++;
        }
        else if(c== 'R' && grid[x][y+1]==1)
        {
            y--;
        }
        else if(c== 'L' && grid[x][y-1]==1)
        {
            y++;
        }
    }

    printf("Final position of the robot is: %d,%d\n",x,y);

    return 0;
}