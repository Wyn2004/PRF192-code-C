#include<stdio.h>
#include<math.h>

//Function check prime
int check_prime(int n) {
    if (n<2) {
        return 0;
    } else
    {
        for (int i=2; i<=sqrt(n); i++) {
            if (n%i==0) {
                return 0;
            }
        }
        return 1;
    }
}

//Main
int main()  {
    int n;
    do {
        printf("Enter number:");
        scanf("%d",&n);
    } while (n<2);
    printf("All prime numbers from 2 to %d:",n);
    for (int i = 2; i<=n; i++)  {
        if (check_prime(i)==1) {
            printf("%d ",i);
        }
    }
    return 0;
}