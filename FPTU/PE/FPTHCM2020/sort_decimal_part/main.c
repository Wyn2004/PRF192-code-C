#include<stdio.h>
#include<string.h>
void swap(char *s1, char *s2) {
    char temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void  sort(char s[1000])    {
    int len = strlen(s);
    for (int i = 0; i<len-1; i++)
        for (int j = i+1; j<len; j++)
            if (s[i]>s[j]) swap(&s[i],&s[j]);
}

int main()  {
    char s[1000], s2[1000]="";
    int point = 0, d =0;
    printf("Enter real number:");
    fflush(stdin);
    fgets(s, sizeof(s),stdin);
    int len = strlen(s)-1;
    for (int i = 0; i<len; i++) {
        if (s[i] == '.')    {
            for (int j = i+1; j<len;j++)
                {
                    s2[d] = s[j];
                    d++;
                }
            point = i;
            break;
        }
    }
    sort(s2);
    for (int i = 0; i<=point; i++) printf("%c",s[i]);
    for (int i = 0; i<d; i++) printf("%c",s2[i]);
    return 0;
}