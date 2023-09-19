#include<stdio.h>
#include<math.h>

// Declare functions
void intput();
int check_leap_year(int year);
int checkDate(int d, int m, int y);
void printFibo(int n);

//Main
int main()  {
    intput();
    return 0;
}

// Funciton receive input
void intput()   {
    int n;
    do  {
        printf("1-Fibonacci sequence.\n");
        printf("2-Check a date.\n");
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
                do
                {
                    printf("Enter the number of Fibonacci sequence: ");
                    scanf("%d",&x);
                } while (x<0);
                printFibo(x);
                break;
            }
            case 2:{
                int d,m,y;
                printf("Enter the date (dd-mm-yyyy): ");
                scanf("%d-%d-%d",&d,&m,&y);
                if (checkDate(d,m,y)==1)  printf("The date is valid.\n"); else  printf("The date is not valid.\n");
                printf("Done.\n");
                printf("\n");
                break;
            }
        }
    } while (n<3);
    printf("Good bye, see you again.");
}

//Function check leap year
int check_leap_year(int year)   {
    if ((year%4==0 && year%100!=0)||(year%400==0)) return 1; else return 0;
}

// Function print sequence fibo
void printFibo(int n)   {
    int x = 1, y = 0;
    printf("Fibonacci sequence: ");
    for (int i = 0; i<n; i++)   {
        printf("%d ",x);
        x+=y;
        y=x-y;
    }
    printf("\n");
    printf("Done.\n");
    printf("\n");
}

//Function check date
int checkDate(int d, int m, int y) {
    if ((d>0 && d<32) && (m>0 && m<13) && (y>0))    {
        if ((m==4) || (m==6) || (m==9) || (m==11))  {
            if (d<=30) return 1; else return 0;
        } else 
        if (m==2)   {
            if (check_leap_year(y)==1)   {
                if (d<=29) return 1; else return 0;
            } else if (d<=28) return 1; else return 0;
        }   else 
        return 1;
    } else return 0;
}