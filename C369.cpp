#include "nhapxuat.h"

void duongDauTien(int a[][MAX], int row, int col)
{
    int temp;
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] >= 0)
            {
                temp = a[i][j];
                dem++;
                goto boqua;
            }
        }
        
    }
    
    boqua:
        if (dem == 0)
            cout << "Khong co gia tri duong nao trong mang" << endl;
        else
            cout << "Gia tri duong dau tien trong mang la : " << temp << endl;
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    duongDauTien(a, row, col);
    return 0;
}