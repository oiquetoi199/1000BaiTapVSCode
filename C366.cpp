#include "nhapxuat.h"

void nhapTuDong(int a[][MAX], int row, int col)
{
    int dem = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = dem++;
        }
    }
}

void soChanDauTien(int a[][MAX], int row, int col)
{
    int temp;
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j]  >= 0)
            {
                temp = a[i][j];
                flag = 1;
                goto ketqua;
            }
        }
        
    }
    
    ketqua:
    if (flag == 1)
        cout << "Gia tri duong dau tien trong mang la : " << temp << endl;
    else 
        cout << "Mang khong co gia tri duong nao !!!" << endl;
}

int main()
{

    int a[MAX][MAX];
    int row, col;
    row = col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    soChanDauTien(a, row, col);
    return 0;
}