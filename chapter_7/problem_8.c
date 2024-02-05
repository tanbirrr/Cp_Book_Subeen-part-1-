#include<stdio.h>

double area(int r)
{
    double x= 3.14159*r*r;
    return x;
}

int main()
{
    int radius;

    printf("ENter the redius of the circle: \n");
    scanf("%d",&radius);

    printf("area of the circle is: %0.2lf\n",area(radius));

    return 0;
} 