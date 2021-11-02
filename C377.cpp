#include "nhapxuat.h"
#include "kiemTra.h"

void nguyenToLonNhat(int a[][MAX], int row, int col)
{
    // tim so nguyen to dau tien trong mang
    int temp = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ktNguyenTo(a[i][j]) == 1)
            {
                temp = a[i][j];
            }
        }
    }
    if (temp == 0)
    {
        cout << "Khong co so nguyen to nao trong mang !!!";
        return;
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > temp && ktNguyenTo(a[i][j]) == 1)
                temp = a[i][j];
        }
    }
    cout << "So nguyen to lon nhat trong mang la : " << temp << endl;
    
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    system("cls");
    xuatMang(a, row, col);
    nguyenToLonNhat(a, row, col);
    return 0;
}