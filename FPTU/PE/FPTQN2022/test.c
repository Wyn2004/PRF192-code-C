// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
 
// int main(){
//     int r;
//     srand((int)time(0));
//     for(int i = 0; i < 5; ++i){
//         r = rand();
//         printf("Rand %d is %d\n",i, r);
//     }    
// }

#include <stdio.h>
int main()
{
  char arr[3][10] = {"Thuyen","Trung","Anh"};
  printf("String array Elements are:\n");
  for (int i = 0; i < 3; i++)
    printf("%s\n", arr[i]);
  return 0;
}