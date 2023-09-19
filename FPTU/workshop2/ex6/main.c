#include<stdio.h>

//Fuction check fibonacci number
long int check_fibo(long int  n)  {
    if ((n==1) || (n==2))   {
        return 1;
    } else {
        long int  x = 1, y=1;
        while (x<=n)    {
            if (x==n)   {
                return 1;
            } else  {
                x = y + x;
                y = x - y;
            }
        }
        return 0;
    }
}

//Main 
int main()  {
    long int n;
    do  {
        printf("Enter a number:");
        scanf("%li", &n);
    }   while (n<1);
    if (check_fibo(n)==1)  {
        printf("fibonacci number\n");
    } else  {
        printf("not fibonacci number\n");
    }
    return 0;
}