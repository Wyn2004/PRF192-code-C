#include<stdio.h>

//Function check leap year
int check_leap_year(int year)   {
    if ((year%4==0 && year%100!=0)||(year%400==0)) return 1; else return 0;
}

//Function check date
int check_date(int d, int m, int y) {
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

//Main
int main()   {
    int d, m, y;
    printf("Enter the day, month and year: ");
    scanf("%d %d %d", &d, &m, &y);
    if (check_date(d, m, y)==1) printf("The date is valid."); else printf("The date is invalid.");
    return 0;
}
