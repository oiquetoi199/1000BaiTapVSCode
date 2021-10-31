#include "nhapxuat.h"

void demDuong1Hang(float a[][MAX], int row,int col)
{
    int dem;
    for (int i = 0; i < row; i++)
    {
        dem = 0;
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > 0)
            {
                dem++;
            }
        }
        cout << "Co (" << dem << ") phan tu duong trong hang thu (" << i << ")\n"; 
    }
    
}
int main()
{
    float a[MAX][MAX];
    int row = 3, col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demDuong1Hang(a, row, col);
    return 0;
}