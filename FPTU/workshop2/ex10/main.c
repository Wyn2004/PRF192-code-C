#include <stdio.h>

//Function find min max digit of number
void min_max_digit(long int  n)    {
    int min = n % 10,  max = n % 10;
    n/=10;
    while (n>1)
    {
        if (n % 10 < min)
        {
            min = n % 10;
        }
        else if (n % 10 > max)
        {
            max = n % 10;
        }
        n/=10;
    }
    printf("Max digit:%d\n",max);
    printf("Min digit:%d\n",min);
}

//Main
int main()  {
    long int n;
    do  {
        printf("Enter a number:");
        scanf("%li",&n);
        if (n>0)    {
            min_max_digit(n);
        } else  {
            printf("Invalid number.\n");
            break;
        }
    } while (n>0);
    return 0;
}