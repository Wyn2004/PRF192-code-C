#include <stdio.h>
#include <math.h>
#include <string.h>

//Function calculate area triangle
void area_triangle(double a, double b, double c, double r) {
    if ((a+b>c) && (a+c>b) && (b+c>a))    {
        double p = (a+b+c)/2;
        printf("The area of the triangle is %.3lf\n", p*r);
    } else printf("Error input value...");
}

//Function check prime number

int check_prime_number(int n)   {
    int flag = 0;
    for (int i = 2; (i<=sqrt(n)) && (flag == 0); i++)   {
        if (n % i ==0)    {
            flag=1;
        }
    }
    return flag;
}

//Function find the unique elements found in the array

void find_unique_elements(int arr[], int n)   {
    int d;
    for (int i=1; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]>=arr[j]) {
                d = arr[i];
                arr[i] = arr[j];
                arr[j] = d;
            }
        }
    }
    int c=0;
    for (int i=0; i<n; i++) {
        if ((arr[i]!=arr[i-1]) && (arr[i]!=arr[i+1])) {
            printf("%d ", arr[i]);
            c = 1;
        };
    }
    if (c==0) {printf("0");};
}   

//Function replace space

void replace_space(char str[100], char sr) {
    for (int i=0; i<strlen(str); i++) {
        if (str[i]==' ') {
            str[i] = sr;
        }
    }
    printf("%s",str);
}

//Main
int main()  {
    int n;
    printf("-------------\n");
    printf("1. The area of the triangle.\n");
    printf("2. Check prime number.\n");
    printf("3. Find the unique elements.\n");
    printf("4. Replace space.\n");
    printf("-------------\n");
    printf("Enter your choice:");
    scanf("%d", &n);
    if ((n<5) && (n>0))   {
        switch (n)
        {
        case 1: {
            double a, b, c, r;
            printf("Enter the sides of the triangle and radius:");
            scanf("%lf %lf %lf %lf", &a, &b, &c, &r);
            area_triangle(a, b, c, r);
            break;
        }
        case 2:{
            int n;
            printf("Enter the number:");
            scanf("%d", &n);
            if (n>0)    {
                if (check_prime_number(n)==0)    {
                    printf("The number %d is a prime number.\n", n);
                } else  {
                    printf("The number %d is not a prime number.\n", n);
                }
            } else printf("Error input value...");
            break;
        }
        case 3: {
            int n;
            printf("Enter the array size:");
            scanf("%d", &n);
            int arr[n];
            printf("Enter values of the array:");
            for (int i=0; i<n; i++)    {
                scanf("%d", &arr[i]);
            }
            printf("The unique elements found in the array are :");
            find_unique_elements(arr, n);
            break;
        }
        case 4: {
            char str[100];
            char sr;
            printf("Enter the string:");
            fflush(stdin);
            fgets(str,sizeof(str),stdin);
            printf("Enter the string your want replace:");
            scanf("%c",&sr);
            replace_space(str, sr);
            break;
        }
        default: printf("Error input value...");
            break;
        }
    }   else {printf("Error unput value...");};
    return 0;
}
