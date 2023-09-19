#include<stdio.h>
#include<string.h>
#include<math.h>

//Function calculate the surface area of the cone hint
void stretch_cone_hint(double r, double h)    {
    const double pi = 3.14159;
    if ((r>0) && (h>0)) {
        double l = sqrt(pow(r,2)+pow(h,2));
        double s = pi*pow(r,2) + pi*r*l;
        printf("Result is:%.3lf",s);
    }   else { printf("Error input value...");};
}

//Function reverse number 
int reverse_number(int num) {
    int temp=0;
    while (num!=0)  {
        temp = temp*10 + num%10;
        num/=10;
    }
    return temp;
}

//Function input value to array
void input_value(int arr[], int n, int m) {
    for (int i=0; i<n; i++) {
        if ((m>=arr[i]) && (m<=arr[i+1])) {
            int x = n+1;
            arr[i] = m;
            m = arr[i+1];
        }
    }
    printf("After insert the list is:");
    for (int i=0; i<n+1; i++)   {
        printf("%d ",arr[i]);
    }
}

//Function sort ascending order
void sort_ascending(int arr[], int n, int m) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The array list in ascending order:");
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    input_value(arr, n, m);
}

//Function remove not alphabets
void remove_string(char str[])    {
    for (int i=0; i<strlen(str); i++) {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))   {
            printf("%c",str[i]);
        }
    }
}

//Main
int main()  {
    int n;
    printf("--------------------\n");
    printf("1.Calculate the surface area of the cone hint\n");
    printf("2.Reverse the number\n");
    printf("3.Sort the array in ascending order\n");
    printf("4.Remove not alphabets\n");
    printf("--------------------\n");
    printf("Enter number you choice:");
    scanf("%d",&n);
    if ((n<5) && (n>0))    {
        switch (n)  {
        case 1: {
            double r, h;
            printf("Enter radius of the cone:");
            scanf("%lf", &r);
            printf("Enter height of the cone:");
            scanf("%lf", &h);
            stretch_cone_hint(r, h);
            break;
        }
        case 2: {
            int num;
            printf("Enter number you want to reverse:");
            scanf("%d", &num);
            if (num>0)    {
                printf("Result is:%d", reverse_number(num));
            } else {printf("Error unput value...");}
            break;
        }
        case 3: {
            int n, m;
            printf("Enter number elements your want:");
            scanf("%d", &n);
            int arr[n];
            printf("Enter value of the elements:");
            for (int i=0; i<n; i++)    {
                scanf("%d", &arr[i]);
            }
            printf("Enter value you want insert:");
            scanf("%d", &m);
            if (n>0)    {
                sort_ascending(arr, n, m);
            } else {printf("Error unput value...");}
            break;
        }
        case 4:    {
            char str[100];
            printf("Enter string you want to encrypt:");
            fflush(stdin);
            fgets(str,sizeof(str),stdin);
            remove_string(str);
            break;
        }
        default: printf("Error unput value...");
            break;
        }   
    }   else {printf("Error unput value...");};
}