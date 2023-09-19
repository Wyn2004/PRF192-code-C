#include<stdio.h>

int main()  {
    int x ,y ,z;
    do
    {
        printf("Enter x and y");
        scanf("%d %d", &x , & y);
        z = x; 
        x = y; 
        y = z;
        printf(" x = %d , y = %d \n", x , y);
    } while ((y!=0 || x!=0));
    return 0;
}