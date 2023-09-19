#include<stdio.h>
#include<math.h>

// Declare functions
void input();
int isPrime(int n);
void maxminDigit(unsigned long long n);

//Main
int main()  {
    input();
    return 0;
};

//Function check prime number
int isPrime(int n)  {
    int check = 1;
    if (n>=2)   {
        for (int i=2; i<=sqrt(n) && check == 1; i++) 
            if(n%i==0)  check = 0;
    } else check  = 0;
    return check;
};

//Function print max and digit
void minmaxDigit(int n) {
    int min = 9, max = 0, digit;
    while (n>0) {
        digit = n%10;
        if (digit<min)  min = digit;
        if (digit>max)  max = digit;
        n/=10;
    }
    printf("Max digit is: %d\n",max);
    printf("Min digit is: %d\n",min);
    printf("Done.\n");
    printf("\n");
};

//Function receive input
void input()   {
    int n;
    do  {
        printf("1-Process primes.\n");
        printf("2-Print min, max digit in an integer.\n");
        printf("3-Quit.\n");
        printf("------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d",&n);
        printf("\n");
        printf("Loading...\n");
        printf("\n");
        switch (n)  {
            case 1:{
                int x;
                do  {
                    printf("Enter a number:");
                    scanf("%d",&x);
                }while (x<0);
                if (isPrime(x)==1)  printf("It is a prime number.\n"); else printf("It is not a prime number.\n");
                printf("Done.\n");
                printf("\n");
                break;
            }
            case 2:{
                int x;
                do  {
                    printf("Enter a number:");
                    scanf("%d",&x);
                }while (x<=0);
                minmaxDigit(x);
                break;
            }
        }
    } while (n<3);
    printf("Good bye, see you again.");
};




