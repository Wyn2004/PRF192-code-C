#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

//Function total Surface Area (TSA) of cylinder
double stretch(double r, double h)    {
    const double pi=3.14;
    double scsa = 2*pi*r*h;
    double stsa = 2*pi*pow(r,2) + scsa;
    return stsa;
}

//Function convert decimal number to binary

void dec2bin(int n)  {
    char b[100]; 
    int d=0;
    while (n>0)    {
        if (n%2==1) {
            char ch = '1';
            char temp[2];
            sprintf(temp,"%c", ch);
            strcat(b,temp);
        } else 
        {
            char ch = '0';
            char temp[2];
            sprintf(temp,"%c", ch);
            strcat(b,temp);
        }
        n=n/2;
    }
    for (int i = strlen(b)-1; i>0; i--) {
        printf("%c",b[i]);
    }
}

//Funtion insert element to array
void insert_element(int arr[], int n, int m, int index)    {
    printf("\nAfter Insert the element the new list is:");
    for (int i=0; i<n+1; i++) {
        if (i==index) {
            int s = arr[i];
            arr[i] = m;
            m = s;
            index++;
        }
        printf("%d ",arr[i]);
    }
}

//Function find s2 in s1
void find_string(char str[100], char s[])  {
    int i=0, d=0;
    while(str[i]!='\0') {
        str[i] = toupper(str[i]);
        i++;
    }
    for (int i=0; i<strlen(str)-strlen(s); i++)   {
        int j=0;
        for (j = 0; j<strlen(s); j++)   {
            if (str[i+j]!=s[j])   {
                break;
            }
        }
            if (j == strlen(s))   {
                d++;
                printf("%d",j);
            }
    }
    printf("The frequency of the word 'the' is :");
    printf("%d\n",d);
    //printf("%d",strlen(s));
}

//Main
int main()  {
    int n;
    printf("--------------------\n");
    printf("1.Total Surface Area (TSA) of cylinder.\n");
    printf("2.Convert decimal number to binary.\n");
    printf("3.Insert element to array.\n");
    printf("4.Find s2 in s1.\n");
    printf("--------------------\n");
    printf("Enter your choice:");
    scanf("%d",&n);
    if ((n<5) && (n>0))    {
        switch (n)
        {
        case 1: {
            double r, h;
            printf("Enter radius:");
            scanf("%lf",&r);
            printf("Enter height:");
            scanf("%lf",&h);
            if (r>0 && h>0) {
                printf("TSA = %.3lf\n",stretch(r,h));
            } else {printf("Error input value...");}
        } 
        case 2: {
            int x;
            printf("Enter decimal number:");
            scanf("%d",&x);
            if (x>0) {
                printf("Binary = ");
                dec2bin(x);
            } else {printf("Error input value...");}   
            return 0; 
            break;
        }
        case 3: {
            int n, m, index;
            printf("Enter number elements of array:");
            scanf("%d",&n);
            int arr[n];
            printf("Enter elements of array:");
            for (int i = 0; i < n; i++) {
                scanf("%d",&arr[i]);
            }
            printf("Enter number you want insert to array:");
            scanf("%d",&m);
            printf("Enter location you want insert:");
            scanf("%d",&index);
            if ((n>0) && (index>=0) && (index<=n))  {
                printf("The current list of the array:");
                for (int i=0; i<n; i++) {
                    printf("%d ",arr[i]);
                }
                insert_element(arr,n,m,index);
            } else {printf("Error input value...");}
            break;
        }
        case 4: {
            char str[100];
            char s[] = "THE";
            printf("Enter string:");
            fflush(stdin);
            fgets(str,sizeof(str),stdin);
            find_string(str,s);
            break;
        }
        default :printf("Error input value...");
            break;
        }
    } else {printf("Error input value...");}
    return 0;
}