#include<stdio.h>

// int* minRow(int arr[][], int x, int y);
// int* maxCol(int arr[][], int x, int y);
void yenNgua(int arr[][4], int n, int m);

int main() 
{
    int n = 3, m = 3;
    int arr[3][3] = {
    // {12, 32, 34, 90},
    // {1, 31, 30, 5},
    // {4, 33, 20, 44},
    // {3, 34, 35, 23}
    
    {15, 3, 9},
    {55, 4, 6},
    {71, 1, 2}
    };
    int xn, yn, xm, ym;
    for (int i = 0; i<n; i++)   
        {
            int maxRow = arr[i][0];
            for (int j= 1 ; j<m; j++)
                if (maxRow <= arr[i][j])
                    {
                        maxRow = arr[i][j];
                        xn = i;
                        yn = j;
                    }
            int minCol = arr[0][yn];
            for (int h = 1; h<n; h++)
                {
                    if (minCol>=arr[h][yn])
                        {
                            minCol = arr[h][yn];
                            xm = h;
                        }
                }
            if (xn == xm && minCol == maxRow)
                {
                    printf("%d\n",minCol);
                    printf("%d %d", xn, yn);
                    break;
                }
        }
}
