#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Declare function check phone number
int checkPhone(int num);

int checkISBN(char s[10])
{
    int a[100], c[100];
    int d = 10, sum = 0;
    for (int i = 0; i<strlen(s); i++) a[i] = s[i] - '0';
    for (int i = 0; i<strlen(s)-1; i++) 
        {
            c[i] =a[i]*d; 
            sum = sum+c[i];
            d--;
        }
    if (sum%11 == 0) return 1; else return 0;
}
// Main 
int main() 
{
    char s[10] = "0003194876";
    if (checkISBN(s) == 1) printf("Valid"); else printf("InValid");
    return 0;
}

// Function check phone number
// int checkPhone(int num)
// {
//     int n[10], c[12];
//     int d = 9, result = 0, T1 = 0, T2 = 0, T3 = 0, total = 0;
//     for (int i = 9; i>0; i--)   
//         {
//             n[i] = num%10;
//             num/=10;
//         }
//     for (int i = 1; i<=4; i++)      
//         {
//             c[i] = c[i+4] = n[(i+1)*2-2];
//             c[d] = 2*c[i];
//             T1 += c[d]/10 + c[d]%10;
//             T2 += n[i*2-1];
//             d+=1;
//         }
//     total = T1+T2;
//     T3 = (total/10+1)*10 - total;
//     if (T3 == n[9]) return 1; else return 0;
// }