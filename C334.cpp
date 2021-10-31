#include "nhapxuat.h"

void demDuong(float a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] >= 0)
            {
                dem++;
            } 
        }
    }
    cout << "So luong cac so duong trong mang la : " << dem << endl;
}

int  main()
{
    float a[MAX][MAX];
    int row = 3, col = 3;

    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demDuong(a, row, col);
    return 0;
}
