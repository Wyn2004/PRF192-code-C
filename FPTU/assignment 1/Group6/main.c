#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

// Declare function
double calculate(double x, double y, double z);
void write_number(char num);
int second_smallest(int *arr, int n);
void search(char str1[100], char str2[100]);
void input();
void handleCode(int n);

// Main
int main()
{
    input();
    return 0;
}

//// Implement function ////

// Function accept choice
void input()
{
    int n;
    do{
        printf("----------------------------- Menu -----------------------------------\n");
        printf("===    1.Caculate the value of the following expression.          ====\n");
        printf("===    2.Write number by english.                                 ====\n");
        printf("===    3.Find second smallest if array.                           ====\n");
        printf("===    4.Search string.                                           ====\n");
        printf("===    0.To exit.                                                 ====\n");
        printf("----------------------------------------------------------------------\n");
        printf("Enter number you choice:");
        scanf("%d",&n);
        handleCode(n);
    }while (n>0 && n<5);
    printf("Good byeeeee !!!");
}

//Function handle code
void handleCode(int n)
{
    switch (n)  {
            case 1:   
            {
                double x, y, z;
                do
                {
                    printf("Enter the values of x, y and z:");
                    scanf("%lf %lf %lf",&x,&y,&z);
                } while (x-y+z == 0);
                printf("The expression is (x+y) * (x-y) * (y-z) / (x- y + z)\n");
                printf("The value of the following expression is: %.3lf\n\n",calculate(x,y,z));
                break;
            }
            case 2: 
            {
                char num;
                printf("Enter number:");
                fflush(stdin);
                do
                {
                    num = getchar();
                    write_number(num);
                } while (num!='\n'); 
                printf("\n\n");
                break;
            }
            case 3: 
            {
                int num;
                printf("Enter number elements of array:");
                scanf("%d",&num);
                int*arr=(int*)malloc((num)*sizeof(int));
                printf("Enter element of array:");
                for (int i=0; i<num; i++)  scanf("%d",arr+i);
                printf("The Second smallest element in the array is:%d\n\n",second_smallest(arr,num));
                free(arr);
                break;
            }
            case 4: 
            {
                char str1[100], str2[100];
                printf("Enter first string:");
                fflush(stdin);
                fgets(str1, sizeof(str1), stdin);
                printf("The substring to be searched:");
                fflush(stdin);
                fgets(str2, sizeof(str2), stdin);
                fflush(stdin);
                search(str1, str2);
                break;
            }
        }
}


//Function CALCULATE the value of the following expression
double calculate(double x, double y, double z)    {
    return (x+y) * (x-y) * (y-z) / (x- y + z);
}

//Funciton write number by english
void write_number(char num)
{
    switch (num)
    {
        case '0':   {
            printf("zero ");
            break;
        }
        case '1':   {
            printf("one ");
            break;
        }
        case '2':   {
            printf("two ");
            break;
        }
        case '3':   {
            printf("three ");
            break;
        }
        case '4':   {
            printf("four ");
            break;
        }
        case '5':   {
            printf("five ");
            break;
        }
        case '6':   {
            printf("six ");
            break;
        }
        case '7':   {
            printf("seven ");
            break;
        }
        case '8':   {
            printf("eight ");
            break;
        }
        case '9':   {
            printf("nine ");
            break;
        }
    }
}

int second_smallest(int *arr, int n)
{
int min = *arr, min2 = *(arr+1);
    for (int i = 1; i <n; i++) {
        if (*(arr + i) < min) {
            min2 = min;
            min = *(arr + i);
        } 
        else if (*(arr + i) < min2 && *(arr + i) != min)  min2 = *(arr + i);
    }
    return min2;
}

////Function search string
void search(char str1[100], char str2[100])
{
    int len1 = strlen(str1)-1;
    int len2 = strlen(str2)-1;
    int flag = 0;
    for (int i= 0; (i<=len1-len2) && (flag == 0); i++) {
        int j;
        for (j = 0; (j<len2); j++) {
            if (toupper(str1[i+j])!= toupper(str2[j])) {
                break;
            }
        }
        if (j == len2)  flag=1;
    }
    if (flag == 0) printf("The substring does not exist in the string.\n\n"); 
    else printf("The substring exist in the string.\n\n");
}