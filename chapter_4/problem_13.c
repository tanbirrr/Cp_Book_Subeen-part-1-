#include<stdio.h>

int main()
{
    int i,j,k;
    
    for(i=1; i<=3; i++) {
        for(j=1; j<=3; j++) {
            if(i==j) {
                continue;
            }
            for(k=1; k<=3; k++) {
                if(i==k || j==k ) {
                    continue;
                }
                printf("%d %d %d\n",i,j,k);
            } 
        }
    }
    return 0;

}