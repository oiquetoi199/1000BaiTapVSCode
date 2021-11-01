#include "nhapxuat.h"
#include "kiemTra.h"

void timSoNguyenToDauTien(int a[][MAX], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ktNguyenTo(a[i][j]) == 1)
            {
                cout << "So nguyen to dau tien trong mang la : " << a[i][j] << endl;
                return;
            }
        }
        
    }
    
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    timSoNguyenToDauTien(a, row, col);
    return 0;
}