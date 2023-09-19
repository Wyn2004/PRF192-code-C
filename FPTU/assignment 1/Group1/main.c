#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// Function calculate area striagle
float stretch(float a, float b , float c)   {
    float s, p;
    if ((a + b > c) && (a + c >b) && (b + c >a))  {
        p = (a + b +c )/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        return s;
    } else return 0;
}

// Function scan fibonacci number
void fibo(int n)     {
    if (n>=1)  {
    long int f = 0, y = 1;
    for (int i = 1; i<=n; i++)  {
        printf("%li ", f);
        f = f + y; 
        y = f - y ;
    }
    } else printf("Error input value...");
}

//Function find number of duplicate elements in the array
int find_duplicate(int arr[], int n)  {
    int x;
    for (int i = 0; i < n-1; i++)  {
        for (int j = i + 1; j < n; j++)  {
            if (arr[i] >= arr[j])  {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }
    x=0;
    for (int i = 0; i<n-1; i++)   {
        if ((arr[i] != arr[i+1]) && (arr[i] == arr[i-1]))   {
            x++;
        }
    }
    return x;
}

// Function check palindromic

int isPalindromic(char str[100], int a, int b) {
    while (a<b) {
        if (str[a]!= str[b]) {
            return 0;
        }
        a++;
        b--;
    }
    return 1;
}

//Function find the longest palindromics

void longest_palindromic(char str[100])  {
    int a ,b, d = 0;
    char s[100];
    for (int i=0; i<=strlen(str)-1; i++)    {
        for (int j = i; j<=strlen(str); j++)    {
            if (isPalindromic(str, i, j))  {
                if (j-i+1 >= d)    {
                    d = j-i+1;
                    a=i;
                    b=j;
                }
            }
        }    
    }
    for (int i=a; i<=b; i++){
        printf("%c",str[i]);
    }
}

//Main
int main()  {
    int n;
    printf("-------------------\n");
    printf("Some choice you have:\n");
    printf("1.Calculate area of triangle. \n");
    printf("2.Show fibonalci. \n");
    printf("3.Find duplicate elements. \n");
    printf("4.Find the longest palindromic.\n");
    printf("-------------------\n");
    printf("Enter your choice:");
    scanf("%d", &n);
    if ((n<5 && (n>0)))   {
        switch (n)
            {
            case 1: {
                double a, b ,c ;
                printf("Enter 3 sides of a triangle:");
                scanf("%lf %lf %lf", &a, &b, &c);
                if (stretch(a,b,c) != 0)    {
                    printf("The area of the triangle is %.2lf", stretch(a,b,c));
                    } else printf("Eror input value...");
                break;
            }
            case 2: {
                int n;
                printf("Enter the number of fibonacci:");
                scanf("%d", &n);
                fibo(n);
                break;
            }
            case 3: {
                int n;
                printf("Enter the number of elements:");
                scanf("%d", &n);
                if (n>1)    {
                    int arr[n];
                    printf("Enter value:");
                    for (int i = 0; i<n; i++)   {
                        scanf("%d", &arr[i]);
                    };
                    printf("The number of duplicate elements is %d", find_duplicate(arr, n));
                } else printf("Error input value...");
                break;
            }
            case 4: {
                char str[100];
                printf("Enter a string:");
                scanf("%s",str);
                printf("Longest Palindromic Substring from the said string: ");
                longest_palindromic(str);
                break;
            };
            default: printf("Error input value...");
        }
    }   else {printf("Error unput value...");};
    return 0;
}


/// Khi trái tim biết yêu thì
/// Khối óc như quên điều hay được dạy ...