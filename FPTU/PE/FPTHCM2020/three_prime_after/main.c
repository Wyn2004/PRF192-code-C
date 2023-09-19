#include<stdio.h>
#include<math.h>

int check_prime(int n)  {
    if ((n == 0) || (n == 1)) return 0;
    for (int i = 2; i<=sqrt(n); i++)
        if (n%i == 0) return 0;
    return 1;
}

int main()  {
    int n,d=0;
    printf("Enter number:"); scanf("%d",&n);
    int i=n+1;
    while (d!=3)    {
        if (check_prime(i) == 1)
            {
                printf("%d ",i);
                d++;
            }
        i++;
    }
    return 0;
}