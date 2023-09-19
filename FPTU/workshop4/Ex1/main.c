#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Declare function 
void input();
int checkISBN(char s[11]);

//Main
int main()
{
    input();
    return 0;
}

//Function input
void input() 
{
    char s[11];
    int flag = 0;
    do 
        {
            do
            {
                    printf("ISBN Validator.\n");
                    printf("====================================\n");
                    printf("ISBN (0 to quit):");
                    fflush(stdin);
                    fgets(s,sizeof(s),stdin);
                    if ((strlen(s)-1 == 1) && (s[0]=='0'))  flag = 1;
            } while((strlen(s)<10) && (flag == 0));
            if (flag==0)
                {
                    if(checkISBN(s) == 1) printf("This is a valid ISBN.\n"); 
                    else printf("This is not a ISBN.\n");
                }
        } while (flag == 0);
    printf("Have a nice day.");
}

// Function check number ISBN
int checkISBN(char s[11])
{
    int a[10], c[10];
    int d = 10, sum = 0;
    for (int i = 0; i<strlen(s); i++) a[i] = s[i] - '0';
    for (int i = 0; i<strlen(s); i++) 
        {
            c[i] =a[i]*d; 
            sum = sum+c[i];
            d--;
        }
    if (sum%11 == 0) return 1; else return 0;
}