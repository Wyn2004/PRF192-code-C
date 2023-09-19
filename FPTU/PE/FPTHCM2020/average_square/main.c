#include<stdio.h>

double average_square(double x, double y)
{
    return (x*x + y*y)/2 ;
}

int main()  {
    double x,y;
    printf("Enter x:"); scanf("%lf",&x);
    printf("Enter y:"); scanf("%lf",&y);
    printf("Result:%.2lf",average_square(x,y));
    return 0;
}