#include<stdio.h>
int main() {
    int  ages[]   = {0,17,2,52,25};
    char *names[] = {"None","Mike","Billy","Tom","Stan"};
    int  salary[] = {500,100,756,300,400};

for (int i = 1; i <= 4; i++)
    printf("Name: %s, Age: %d, Salary: %d$ \n", names[i], ages[i], salary[i]);
    return 0;
}