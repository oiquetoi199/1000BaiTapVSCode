#include "nhapxuat.h"

void amLonNhat(int a[][MAX], int row, int col)
{
    int temp;      
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] < 0)
            {
                temp = a[i][j];
                goto tonTaiAm;
            }
        }
    }
    
    cout << "Khong co gia tri am trong mang !!!" << endl;
    return;

    tonTaiAm:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (temp < a[i][j] && a[i][j] < 0)
                temp = a[i][j];
        }
    }
    
    cout << "Gia tri am lon nhat trong mang la : " << temp << endl;
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    amLonNhat(a, row, col);
    return 0;
}