#include "nhapxuat.h"

void demTanXuat(int a[][MAX], int row, int col)
{
    int x, dem = 0;
    cout << "Nhap gia tri can dem tan xuat : ";
    cin >> x;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == x)
            {
                dem++;
            }
        }   
    }
    cout << "Gia tri (" << x << ") xuat hien (" << dem << ") lan trong mang\n";
}

int main()
{
    int a[MAX][MAX];
    int row = 3, col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demTanXuat(a, row, col);
    system("pause");
    return 0;
}