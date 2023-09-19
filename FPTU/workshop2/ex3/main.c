#include<stdio.h>
#include<math.h>

//Function check point and circle
int check_point(double x, double y, double r)     {
    double length_point =  sqrt(x*x + y*y);
    if (length_point < r)    {
        return 0;
    } else
    if (length_point == r)   {
        return 1;
    } else {
        return 2;
    }
}


//Main
int main()  {
    double x, y, r;
    printf("Enter coordinates (x, y) of the point to be checked:");
    scanf("%lf %lf", &x, &y);
    do  {
        printf("Enter radius:");
        scanf("%lf", &r);
    }   while (r<0);
    if (check_point(x, y, r) == 0)  {
        printf("The point is inside the circle.");
    } else  {
    if (check_point(x, y, r) ==1)   {
        printf("The point is on the circle.");
    } else {
            printf("The point is outside the circle.");
        }
    }
    return 0;
}