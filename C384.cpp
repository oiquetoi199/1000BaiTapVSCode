#include "nhapxuat.h"
#include "kiemtra.h"

void kiemTracChuSo(int n, int b[])
{
    int temp;
    do
    {
        temp = n % 10;
        n /= 10;
        b[temp]++;    
    }while (n > 0);
}

void demChuSo(int a[][MAX], int row, int col)
{
    int b[10] = {0}; // mang de dem so lan xuat hien cua chu so
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            kiemTracChuSo(a[i][j], b);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    

    int chuSoXuatHienNhieuNhat;
    int soLanXuatHienNhieuNhat = b[0];
    for (int i = 0; i < 10; i++)
    {
        if (soLanXuatHienNhieuNhat < b[i])
        {
            soLanXuatHienNhieuNhat = b[i];
            chuSoXuatHienNhieuNhat = i;
        }
    }
    cout << "Chu so xuat hien nhieu nhat trong mang la : " << chuSoXuatHienNhieuNhat << endl; 
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = 3;
    col = 5;    
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demChuSo(a, row, col);
    return 0;
}