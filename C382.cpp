#include "nhapxuat.h"  
#include "kiemTra.h"

void chinhPhuongLonNhat(int a[][MAX], int row, int col)
{
    // tim so chinh phuong dau tien
    int scp;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ktChinhPhuong(a[i][j]) == 1)
            {
                scp = a[i][j];
                goto timChinhPhuongMax;
            }
        }
    }

    timChinhPhuongMax:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ktChinhPhuong(a[i][j]) == 1 && a[i][j] > scp)
                scp = a[i][j];
        }
    }
    cout << "So chinh phuong lon nhat trong mang la : " << scp << endl;
    
    
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    chinhPhuongLonNhat(a, row, col);

    return 0;
}