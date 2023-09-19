#include<stdio.h>

//Function calculate sum digits of number
int sum_digits(int n)   {
    int s = 0;
    while (n>0) {
        s += n%10;
        n /= 10;
    }
    return s;
}

//Main 
int main()  {
    int n;
    do  {
        printf("Enter a number:");
        scanf("%d",&n);
        if (n>=0)   {
            printf("Sum of digits: %d\n",sum_digits(n));
        }else {
            printf("Invalid number\n");
            break;
        }
    } while (n>=0);
    return 0;
}