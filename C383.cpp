#include "nhapxuat.h"
#include "kiemTra.h"

void soHoanThienNhoNhat(int a[][MAX], int row, int col)
{
    int min = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ktHoanThien(a[i][j]) == 1)
            {
                min = a[i][j];
                goto timMin;
            }
        }
    }
    if (min == 1)
    {
        cout << "Khong co so hoan thien trong mang !!!\n";
        return;
    }
    timMin:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (min > a[i][j] && ktHoanThien(a[i][j]) == 1)
            {
                min = a[i][j];
            }
        }
    }
    cout << "So hoan thien nho nhat trong mang la : " << min << endl;
    return;
    
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    soHoanThienNhoNhat(a, row, col);
    return 0;
}