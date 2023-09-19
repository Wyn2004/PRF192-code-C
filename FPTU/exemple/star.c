#include<stdio.h>
#include<math.h>

int main()  {
    int count = 0;
    for (int i = -10; i<11; i++)  
        for (int j = -10; j<11; j++)    
            if ((i*i)+(j*j)<=100) 
                {
                    count++;
                    printf("%d %d\n",i,j);
                }
    printf("%d",count);
    return 0;
}