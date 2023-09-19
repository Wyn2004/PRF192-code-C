#include<stdio.h>
#include<math.h>
#include<string.h>

//Function calculate the total area of a rectangular
double stretch(double a, double b, double h)    {
    return ((a+b)*2*h)+(2*a*b);
};

///Function check prime number
int isprime(int n)    {
    if (n<2)    {return 1;} else
    for (int i=2; i<=round(sqrt(n)); i++)   {
        if (n%i==0)    {return 0;}
    }
    return 1;
}

//Funtion reverse number
int reverse(int n)    {
    int rev=0;
    while (n>0)    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}

//Function check palindrome
int palindrome(int n)   {
    int rev=reverse(n);
    if (isprime(n) && isprime(rev)) {return 1;} else {return 0;}
}

//Function check even and odd number
void check_numbers(int arr[], int n)    {
    int d=0;
    int odd[d];
    printf("The Even elements are :");
    for (int i=0; i<n; i++)    {
        if (arr[i]%2==0)    {printf("%d ", arr[i]);}
        else    {
            odd[d]=arr[i];
            d++;
        }
    }
    printf("\nThe Odd elements are :");
    for (int i=0; i<d; i++)    {
        printf("%d ", odd[i]);
    }
}

//Function check the frequency of characters
void check_charecters(char str[100], char sr) {
    int count=0;
    for (int i=0; i<strlen(str); i++)    {
        if (str[i]==sr)    {count++;}
    }
    printf("The frequency of %c is:%d",sr,count);
}

//Main
int main()
{
    int n;
    printf("-----------\n");
    printf("1.Calculate the total area of a rectangular\n");
    printf("2.Check palindrome number\n");
    printf("3.Check even and odd number\n");
    printf("4.Check frequency of characters\n");
    printf("-----------\n");
    printf("Enter your choice:");
    scanf("%d", &n);
    if ((n<5)&& (n>0))   {
        switch (n)
        {
        case 1: {
            double a, b, h;
            printf("Enter the length of the rectangular: ");
            scanf("%lf", &a);
            printf("Enter the width of the rectangular: ");
            scanf("%lf", &b);
            printf("Enter the height of the rectangular: ");
            scanf("%lf", &h);
            printf("The total area of the rectangular is %.3lf\n", stretch(a, b, h));
            break;
        }
        case 2: {
            int n;
            printf("Enter your number you want to check:");
            scanf("%d", &n);
            if (palindrome(n)==1)    {printf("The number is a palindrome\n");}
            else    {printf("The number is not a palindrome\n");}
            break;
        }
        case 3: {
            int n;
            printf("Enter number elements of your array:");
            scanf("%d", &n);
            int arr[n];
            printf("Enter your element:");
            for (int i=0; i<n; i++)    {
                scanf("%d", &arr[i]);
            }
            check_numbers(arr, n);
            break;
        }
        case 4: {
            char str[100];
            char sr;
            printf("Enter your string: ");
            fflush(stdin);
            fgets(str,sizeof(str),stdin);
            printf("Enter the charecter you want to check:");
            scanf("%c", &sr);
            check_charecters(str, sr);
            break;
        }
        default:    printf("Error input value...");
            break;
        }
    }   else {printf("Error unput value...");};
    return 0;
}