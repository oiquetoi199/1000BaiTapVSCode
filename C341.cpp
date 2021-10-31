#include "nhapxuat.h"

void demDuong(float a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1)
            {
                if (a[i][j] >= 0)
                {
                    dem++;
                }
            }
            else if (j == 0 || j == col - 1)
            {
                if (a[i][j] >= 0 || a[i][j] >= 0)
                {
                    dem++;
                }
            }
        }
        
    }
    cout << "Co (" << dem << ") phan tu duong tren bien cua mang\n";
    
}

int main()
{
    float a[MAX][MAX];
    int row = 4, col = 5;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demDuong(a, row, col);
    
    return 0;
}