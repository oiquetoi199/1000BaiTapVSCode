// dich phai xoay vong cac cot
#include "nhapxuat.h"

void dichPhaiXoayVong(int a[][MAX], int row, int col)
{
    int temp;
    for(int i = 0; i < row; i++)
    {
        for(int j = col - 1; j >= 0; j--)
        {
            if (j == col - 1)
            {
                temp = a[i][j];
                a[i][j] = a[i][j-1];
            }
            else if (j == 0)
            {
                a[i][j] = temp;
            }
            else 
            {
                a[i][j] = a[i][j-1];
            }
        }
    }
}

int main()
{
    int row, col;
    row = 4;
    col = 6;
    int a[MAX][MAX];
    nhapMangTuDong(a, row, col);
    xuatMang(a, row, col);
    dichPhaiXoayVong(a, row, col);
    cout << "Mang sau khi dich phai xoay vong cot la: \n";
    xuatMang(a, row, col);
    return 0;
}