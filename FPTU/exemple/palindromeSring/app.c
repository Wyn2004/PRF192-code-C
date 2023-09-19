#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>

void Palindrome(char* str) {
    int maxLength = 1;
    int start = 0;
    int low, high;
    for (int i = 1; i < strlen(str); ++i) {
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < strlen(str) && str[low] == str[high]) { 
            --low; 
            ++high;
        }
        int length = high - low - 1; 
        if (length > maxLength){
            maxLength = length;
            start = low + 1;
        }
        low = i - 1;
        high = i;
        while (low >= 0 && high < strlen(str) && str[low] == str[high]) {
            --low; 
            ++high; 
        }
        length = high - low - 1;
        if (length > maxLength) {
            maxLength = length;
            start = low + 1;
        }
    }
    printf("Original string: %s\n", str);//in chuoi goc
    int sum = start + maxLength;
    if(sum<=1){
        printf("Longest Palindromic Substring from the said string: Not found!\n");
    }
    else{
        printf("Longest Palindromic Substring from the said string: ");
        for (int i = start; i < sum; ++i) {
            printf("%c", str[i]);
        }
    }
}
int main() {
    char str[100] = "aaa";
    int len=strlen(str);
    if(len>1){
        Palindrome(str);
    }
    else printf("Invalid!");
    return 0;
}