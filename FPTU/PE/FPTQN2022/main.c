#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int const MAX_INT = 9999999;

// Declare function
void input();
void choice(int n);
void replaceSpace(char str[]);
int convertDay(double n);
void minArray(int n);
int totalCharacters(char str[]);
int totalWords(char str[]);

// Main
int main() 
{
    input();
    return 0;
}

// Create function

void input()
{
    int n;
    do
    {
        printf("-------------------------------------\n");
        printf("\t\t\tMenu \n");
        printf("1) Replace Space in a String.\n");
        printf("2) Convert Day to Number of Days from Monday.\n");
        printf("3) Find Minimum Element in an Array.\n");
        printf("4) Count Total Characters and Words in the given string.\n");
        printf("5) Count the total number of words in a string.\n");
        printf("Exit Program.\n");
        printf("-------------------------------------\n");
        printf("Enter your Choice : ");
        scanf("%d", &n);
        choice(n);
    } while (n>0 && n<6);
    printf("Good bye...");
}

void choice(int n)
{
    switch (n)
    {
        case 1:
        {
            char str[10000];
            printf("Enter string:");
            fflush(stdin);
            fgets(str,sizeof(str),stdin);
            replaceSpace(str);
            break;
        }

        case 2:
        {
            double day;
            do 
            {
                printf("Enter number of day:");
                scanf("%lf",&day);
            }while (n<0);
            printf("Number of years is:%d\n",convertDay(day));
            break;
        }

        case 3:
        {
            int num;
            do 
            {
                printf("Enter size of array:");
                scanf("%d",&num);
            } while (num<50 && num>100);
            minArray(num);
            break;
        }
    
        case 4:
        {
            char str2[10000];
            printf("Enter string:");
            fflush(stdin);
            fgets(str2,sizeof(str2),stdin);
            printf("Total number of characters in a string:%d\n",totalCharacters(str2));
            break;
        }

        case 5:
        {
            char str3[10000];
            printf("Enter string:");
            fflush(stdin);
            fgets(str3,sizeof(str3),stdin);
            printf("Total number of words in the given string:%d\n",totalWords(str3));
            break;
        }
    }
}

// Function replace space
void replaceSpace(char str[])
{
    printf("String after replacing space with '-':");
    for (int i = 0; i<strlen(str)-1; i++)
        {
            if (str[i] == ' ') str[i] = '-';
            printf("%c",str[i]);
        }
    printf("\n");
}

// Function convert day to year
int convertDay(double n)
{
    int y;
    y = (n<356) ?  0 : n/356;
    return y;
}

// Function find min in random array
void minArray(int n)
{
    int arr[n];
    srand((int)time(0));
    int index, min=MAX_INT, r;
    printf("The array with n elements radom:\n");
    for (int i = 0; i<n; i++)  
    {
        r =50 + rand()%(100-50+1);
        arr[i]=r;
        printf("%d  ",arr[i]);
        if (arr[i]<min)
            {
                index = i;
                min = arr[index];
            }
    }
    printf("\n");
    printf("Min:%d\n",min);
    printf("Index: %d\n",index);
}

// Function total characters in a string
int totalCharacters(char str[])
{
    return strlen(str)-1;
}

// Function total words in a string
int totalWords(char str[])
{
    int len = strlen(str)-1;
    int d = 0;
    if (str[d] != ' ') d = 1; else d = 0; 
    for (int i = 0; i<len-1; i++)
        if ((str[i] == ' ') && (str[i+1] != ' ')) d++;
    return d;
}