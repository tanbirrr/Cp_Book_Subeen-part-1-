#include<stdio.h>

int main()
{
 int ft_marks[10] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41};
 int st_marks[10] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42};
 int final_marks[10] = {87, 64, 91, 43, 89, 66, 58,73,99,81};

 double total_marks[10];

 for(int i=0; i<10; i++) {
    total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
 }

 for(int i=1; i<=10; i++) {
    printf("Roll No: %d\tTotal Marks: %0.2lf\n",i,total_marks[i-1]);
 }

 return 0;
}